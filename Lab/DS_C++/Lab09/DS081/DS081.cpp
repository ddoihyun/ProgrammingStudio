#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

TreeNode* buildTree(int *nums, int size) {
    if (nums == NULL || size == 0) return NULL;

    TreeNode* root = new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (i < size) {
        TreeNode* curr = q.front();
        q.pop();
        if (i < size && nums[i] != 0) { // 0이면 빈 노드 의미
            curr->left = new TreeNode(nums[i]);
            q.push(curr->left);
        }
        i++;
        if (i < size && nums[i] != 0) {
            curr->right = new TreeNode(nums[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

void printInOrderTree(TreeNode* root) {
    if (!root) return;
    printInOrderTree(root->left);
    cout << root->val << " ";
    printInOrderTree(root->right);
}

int main() {
    int n;
    cin >> n;
    int *nums = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    TreeNode* root = buildTree(nums, n);
    printInOrderTree(root);
    cout << endl;

    delete[] nums;
    return 0;
}

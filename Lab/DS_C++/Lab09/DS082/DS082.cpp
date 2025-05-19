#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int v) {
        val = v;
        left = right = NULL;
    }
};

TreeNode* buildTree(int* arr, int n) {
    if (n == 0 || arr[0] == 0) return NULL;

    TreeNode* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while (i < n) {
        TreeNode* curr = q.front();
        q.pop();

        // left child
        if (i < n && arr[i] != 0) {
            curr->left = new TreeNode(arr[i]);
            q.push(curr->left);
        }
        i++;

        // right child
        if (i < n && arr[i] != 0) {
            curr->right = new TreeNode(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main() {
    int n, method;
    cin >> n >> method;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    TreeNode* root = buildTree(arr, n);

    if (method == 1) {
        cout << "preorder traversal: ";
        preorder(root);
    } else if (method == 2) {
        cout << "postorder traversal: ";
        postorder(root);
    }
    cout << endl;

    delete[] arr;
    return 0;
}

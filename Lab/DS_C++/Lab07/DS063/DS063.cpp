#include <iostream>
#include "MyLLQueue.h"
using namespace std;

int main() {
    int N;
    cin >> N;
    MyLLQueue q1, q2;
    // player1 card
    for (int i = 0; i < N; i++) {
        int v;
        cin >> v;
        q1.enqueue(v);
    }
    // player2 card
    for (int i = 0; i < N; i++) {
        int v;
        cin >> v;
        q2.enqueue(v);
    }

    int score1 = 0, score2 = 0;
    int prevBN1 = 0, prevBN2 = 0;

    for (int round = 1; round <= N; round++) {
        int card1 = q1.getFront()->data;
        q1.dequeue();
        int card2 = q2.getFront()->data;
        q2.dequeue();

        int BN1, BN2;
        if (round == 1) {
            BN1 = card1;
            BN2 = card2;
        } 
        else {
            if (prevBN1 > prevBN2)
                BN1 = card1 + (prevBN1 - prevBN2 - 1);
            else
                BN1 = card1;

            if (prevBN2 > prevBN1)
                BN2 = card2 + (prevBN2 - prevBN1 - 1);
            else
                BN2 = card2;
        }

        if (BN1 > BN2) {
            cout << "Round" << round << " - P1 win!" << "\n";
            score1++;
        } 
        else if (BN1 < BN2) {
            cout << "Round" << round << " - P2 win!" << "\n";
            score2++;
        } 
        else cout << "Round" << round << " - Draw!" << "\n";

        prevBN1 = BN1;
        prevBN2 = BN2;
    }

    // print
    if (score1 > score2) cout << "Final - P1 win!" << "\n";
    else if (score1 < score2) cout << "Final - P2 win!" << "\n";
    else cout << "Final - Draw!" << "\n";

    return 0;
}

/*
1. Problem
There are N cards with scores Ai and Bi written on them, representing scores for players PA and PB, respectively.
Two players, PA and PB, take turns picking cards, adding the value on the card to their total score.
The goal is to maximize the difference between the total scores of the two players (SA - SB), where SA and SB represent the total scores of players PA and PB, respectively.
Explanation:

1.Initial State:

Initially, all cards are with player PB (Player B).
Total score of player PA (Player A), SA = 0.
Total score of player PB, SB = sum of scores of all cards held by player PB.

2.Calculation of SA - SB:

SA - SB represents the difference between the total scores of player PA and player PB.
In the initial state, SA - SB = - sum of scores of all cards held by player PB. This is because SA is 0 initially, and SB is the sum of scores of all cards.

3.Transition from Player B to Player A:

If we choose to transfer the jth card from player PB to player PA:
SA becomes Aj (score of the jth card).
SB becomes the sum of scores of all cards - the score of the jth card (sum of Bi - Bj).
The change in SA - SB due to this transition becomes Aj + Bj - sum of scores of all cards.

3.Maximizing SA - SB:

The goal is to maximize the difference SA - SB, as this represents the advantage of player A over player B.
To achieve this, we sort the cards based on the sum of their scores (Aj + Bj) in non-increasing order.
By doing so, we ensure that the cards that contribute the most to increasing SA - SB (i.e., Aj + Bj - sum of scores of all cards held by player PB) are picked first.

4.Picking Cards:

After sorting the cards, we pick them one by one, transferring them from player PB to player PA in the order determined by the sorting.
Each card transferred contributes to increasing the difference SA - SB by its score difference (Aj + Bj - sum of scores of all cards held by player PB).
By picking cards in this manner, we maximize the advantage of player A over player B.
*/

#include <bits/stdc++.h>
using namespace std;

bool camp(pair<int, int> &a, pair<int, int> &b)
{                                                   // Comparetor function.
    return a.first + a.second > b.first + b.second; // Sort the pair according to this condition.
}

int main()
{
    int n; // Total number of cards on the table
    cin >> n;

    vector<pair<int, int>> cards(n); // Each card have two value the first value repersent the score by A and second value repersent the score by B.
    for (int i = 0; i < n; i++)      // O(n)
    {
        cin >> cards[i].first >> cards[i].second;
    }

    sort(cards.begin(), cards.end(), camp);  //O(nlog(n))

    for (int i = 0; i < n; i++)   //o(n)
    {
        cout << cards[i].first << " " << cards[i].second << "\n";
    }
}

/*Overall time complexity: O(n log n)
*/ 

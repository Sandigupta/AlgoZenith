// 1. Problem: Determine if a given string of parentheses is valid.

/*Following condition should be vailed to be a valid paranthesis string
1.depth(end)=0 --- it means at the end the value of depth shold be equal to zero.
2. and deapth after every char of string shold be >=0;
ex:= "(()())()" here all the charecters are simmilar.
*/
#include<bits/stdc++.h>
using namespace std;

void valid_Paranthesis(){
    string s;
    cin >> s;

    int deapth = 0;
    bool isBalance = 1;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]=='('){
            deapth++;
        }else{
            deapth--;
        }

        if(deapth<0){
            isBalance = false;
            break;
        }   
    }
    if(deapth!=0){
        isBalance = 0;
    }

    if(isBalance)
        cout << "IsBalance" << "\n";
    else
        cout << "Not Balance" << "\n";
}

signed main(){
    // ios::sync_with_stdio(0);   /
    // cin.tie(0);              /
    // cout.tie(0);            /

    valid_Paranthesis();
}

// Time Complexity O(n) as the whole string is being traversed.
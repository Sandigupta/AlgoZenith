/*Question: if you given a string of set of different openning and closing brackets,you have to determine given
  string is valid or not.
  ex: [(){}<>]()
*/

/*Approch: Using "stack along with map" to impliment the algoritham.
 */

#include <bits/stdc++.h>
using namespace std;

void validString()
{
    string s;
    cin >> s;

    map<char, int> mp;
    mp['['] = 1;
    mp['{'] = 2;
    mp['('] = 3;
    mp['<'] = 4;
    mp[']'] = -1;
    mp['}'] = -2;
    mp[')'] = -3;
    mp['>'] = -4;

    stack<char> st;
    bool IsBalance = 1;
    for (auto it:s)
    {
        int val = mp[it];
        if(val>0){
            st.push(val);
        }else{
            if(!st.empty() && st.top()+val==0){
                st.pop();
            }else{
                IsBalance = 0;
                break;
            }
        }
    }
    if(!st.empty())
        IsBalance = 0;

    if (IsBalance)
    {
        cout << "Is a Balance" << endl;
    }else{
        cout << "Is not Balance" << endl;
    }
        
}

int main()
{
    validString();
}

// Time Complexity O(n) as the whole string is being traversed.
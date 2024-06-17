#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    stack<int> st;
    int nge[n];
    for (int i = n-1; i>=0; i--)
    {
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if (!st.empty())
        {
            nge[i]=st.top();
        }else{
            nge[i] = -1;
        }
        st.push(i);
    }
    for (int i = 0; i < n;i++){
        // cout << arr[nge[i]] << " ";
        cout << nge[i]<< " ";
    }
}

// Time complexcity -> O(n).
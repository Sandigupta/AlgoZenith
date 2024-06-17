/*Nearest Smaller Values AZ101
  Description
  You are given an array of N integers. For each position, find the nearest position to its left having a smaller value.
   (1-based indexing) 
*/ 

#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int left_smalest_ele[n]; 
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&v[st.top()]>=v[i]){
            st.pop();
        }
        if(!st.empty()){
           left_smalest_ele[i]=st.top()+1;
        }else{
            left_smalest_ele[i]=0;
        }
        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<left_smalest_ele[i]<<" ";
    }
    cout<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >>t;
    while(t--){
        solve();
    }

}      
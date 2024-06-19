#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,ele;
    cin >>n>>a>>b>>ele;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    map<int,vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]].push_back(i);
    }

    int ans = 0;
    for (auto it:mp )
    {
        if (it.first==ele)
        {
            int s = it.second.size();
            for (int i = 0; i <s; i++)
            {
                if(it.second[i]>=a && it.second[i]<=b){
                    ans++;
                }
            }
            
        }
        
    }

    cout << ans;
}
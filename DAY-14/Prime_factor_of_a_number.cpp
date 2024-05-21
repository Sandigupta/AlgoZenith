#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> solve(int n){
    vector<pair<int, int>> ans;

    for (int i = 2; i * i <= n;i++){
       
        if(n%i==0){
             int cnt = 0;
            while(n%i==0){
                cnt++;
                n /= i;
            }
            ans.push_back({i, cnt});
        }
        if(n>1)
            ans.push_back({1, n});
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> ans= solve(n);
    for(int i = 0;i<ans.size();i++){
        cout << ans[i].first<<"^"<<ans[i].second << endl;
    }
}
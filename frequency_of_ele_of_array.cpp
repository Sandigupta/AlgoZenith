#include<bits/stdc++.h>
using namespace std;
// #define int long long;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >>t;
    while(t--){
     int n,m;
     cin>>n>>m;

     int arr[n];
     int count[(int)(1e5+1)]={0};

     for(int i=0;i<n;i++){
      cin>>arr[i];
      count[arr[i]]++;
     }
     
     for(int i=1;i<=m;i++){
      cout<<count[i]<<endl;
     }
    //  for(int i=1;i<=m;i++){
    //   int cnt=0;
    //     for(int j=0;j<n;j++){
    //        if(arr[j]==i){
    //         cnt++;
    //        }
    //     }
    //     cout<<cnt<<endl;
    //  }
    }

}     
// O(n)
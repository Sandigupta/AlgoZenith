/*Brute force method to find the number of item you 
can buy from a give total amount.
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)  //O(log(n))
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());   //O(nlog(n))

    int ans = 0;
    vector<int> prifixSum(n);
    for (int i = 0; i < n; i++)   //O(log(n))
    {
        if(i>0){
            prifixSum[i] = v[i] + prifixSum[i - 1];
        }else{
            prifixSum[i] = v[i];
        }
    }
   
    ans = upper_bound(prifixSum.begin(), prifixSum.end(), m) - prifixSum.begin();  //O(log(n))
    cout << ans << endl;
}
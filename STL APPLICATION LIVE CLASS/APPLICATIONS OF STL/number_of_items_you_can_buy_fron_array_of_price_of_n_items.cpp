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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= m)
        {
            ans++;
            m -= v[i];
        }else{
            break;
        }
    }

    cout << ans << endl;
}
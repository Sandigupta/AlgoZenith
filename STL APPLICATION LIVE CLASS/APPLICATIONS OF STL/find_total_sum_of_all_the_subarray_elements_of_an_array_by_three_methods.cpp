/*
How to find the sum of all subarray of given elements of an array.

Time Complexcity constrain will be n<10^2
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    for (int st = 0; st < n; st++)
    {
        for (int en = st; en < n; en++)
        {
            int current = 0;
            for (int i = st; i <= en; i++)
            {
                current += v[i];
            }
            cout << current << " ";
            ans += current;
        }
    }
    cout << endl;
    cout << ans << endl;
}

// Time complexcity will be O(n^3).
/*................................................................................................................................*/
/*BY PRIFIX SUM ARRAY IN O(N^2) TIME COMPLEXCITY
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> prifixSum(n);
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            prifixSum[i] = v[i] + prifixSum[i - 1];
        }else{
            prifixSum[i] = v[i];
        }
    }

    int ans = 0;
    for (int st = 0; st < n; st++)
    {

        for (int en = st; en < n; en++)
        {
            int currentSum = prifixSum[en] - (st ==0 ? 0 : prifixSum[st - 1]);
            ans += currentSum;
        }

    }
}

/*..........................................................................................................*/
/*BY CONTRIBUTION TECHNEQUE
BY THIS METHOD WE CAN FIND THE SUM OF ALL SUB ARRAY FORMED IN A GIVE ARRAY IN JUST O(N) TIME COMPLEXCITY.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (i + 1) * (n - i)*v[i];
    }

    cout << ans << endl;
}


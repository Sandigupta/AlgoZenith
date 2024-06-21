#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s;
    cin >> k >> s;

    long long int cnt = 0;
    int st = max(0, s - 2 * k);
    int end = min(k, s);
    for (int z = st; z <= end; z++) // loop for all possible values of x
    {
        int rem = s - z;
        if (rem > k)
            cnt += (2 * k - rem + 1);
        else
            cnt += (rem + 1);
    }
    cout << cnt << "\n";

    return 0;
}

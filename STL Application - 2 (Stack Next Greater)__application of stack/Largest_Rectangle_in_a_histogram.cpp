/*
Largest_Rectangle_in_a_histogram
Description
You have to find the largest rectangular area possible in a given histogram where the largest rectangle can be made of
contiguous bars. Assume that all bars have the same width and the width is 1 unit.
*/

/*--------------------------------------------Brute force method------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int nse_left[n];

    stack<int> st1;
    // left nearest smallest value.
    for (int i = 0; i < n; i++)
    {
        while (!st1.empty() && arr[st1.top()] >= arr[i])
        {
            st1.pop();
        }
        if (!st1.empty())
        {
            nse_left[i] = st1.top() + 1;
        }
        else
        {
            nse_left[i] = 0;
        }
        st1.push(i);
    }

    int nse_right[n];
    // stack<int> st2;
    while (!st1.empty())
    {
        st1.pop();
    }
    
    // right nearest smallest element.
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st1.empty() && arr[st1.top()] >= arr[i])
        {
            st1.pop();
        }
        if (!st1.empty())
        {
            nse_right[i] = st1.top() - 1;
        }
        else
        {
            nse_right[i] = n;
        }
        st1.push(i);
    }

    int max_area = -1e9;
    for (int i = 0; i < n; i++)
    {
        max_area = max(max_area, (nse_right[i] - nse_left[i] + 1) * arr[i]);
    }
    cout << max_area << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i = i + 2)
    {

        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1 && j - i <= n - 1)
                cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
    }
}
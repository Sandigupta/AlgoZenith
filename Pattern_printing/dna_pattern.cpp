#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4*n+5; j++)
            {
                if (i == j%4 || i + j%4 == n - 1)
                {
                    cout << "* ";
                }else{
                    cout << "  ";
                }
            }
            cout << endl;
        }
    
}
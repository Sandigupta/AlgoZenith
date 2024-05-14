#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        double ans = a / b;
        cout << floor(ans) << endl;
        cout << ceil(ans) << endl;
        cout << round(ans) << endl;
    }
}
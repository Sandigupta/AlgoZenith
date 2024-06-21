/*Description
You are given an integer N. You have to tell whether the number is a perfect square/cube according to the given query. Do not use inbuilt sqrt() and cube() function. As sqrt(4) can be equal to 1.9999999 and int(1.999999). = 1. Due to precision issue do not use sqrt() if you are dealing with integers.

Input Format
The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains two space-separated integers Q, N - Q=1 denotes that you have to check if N is a perfect square and Q=2 denotes that you have to check if N is a perfect cube.

Output Format
For each test case, print “YES” if the number is a perfect square/cube and “NO” if the number is not a perfect square/cube, according to the given query.

Constraints
1 ≤ T ≤ 100

1 ≤ N ≤ 107

Sample Input 1
4
1 64
2 64
2 9
1 5
Sample Output 1
YES
YES
NO
NO
*/


#include <iostream>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t; cin >> t;
    while (t--) {
        int q, n; cin >> q >> n;
        if (q == 1) {
            bool is_perf_sq = false;
            for (int i = 1; i * i <= n; ++i) {
                if (i * i == n) {
                    is_perf_sq = true;
                }
            }
            if (is_perf_sq) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            bool is_perf_cube = false;
            for (int i = 1; i * i * i <= n; ++i) {
                if (i * i * i == n) {
                    is_perf_cube = true;
                }
            }
            if (is_perf_cube) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}


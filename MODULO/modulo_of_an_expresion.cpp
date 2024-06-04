#include <bits/stdc++.h>
using namespace std;
using lli = long long;
lli mod = 10e9 + 7;

lli binpow(lli a, lli b, lli mod) {
    if (b == 0)
        return 1;
    if (b % 2) {
        return a * binpow(a, b - 1, mod) % mod;
    } else {
        lli temp = binpow(a, b / 2, mod);
        return temp * temp % mod;
    }
}

int main()
{
    lli a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    a %= mod;
    b %= mod;
    c %= mod;
    e %= mod;

    lli ans = 0;

    lli x = a * b % mod;
    lli y = binpow(c, d, mod);
    lli z = (x - y) % mod;
    lli w = binpow(e, mod - 2, mod);

    lli ans = (z * w) % mod;
    cout << ((ans%mod)+mod)%mod<< endl;
}
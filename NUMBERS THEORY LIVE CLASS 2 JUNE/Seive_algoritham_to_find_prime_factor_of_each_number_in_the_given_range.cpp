#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000100
int is_prime[MAXN];
int prime_factors[MAXN];
void precompute(){
    for (int i = 2; i < MAXN; i++)
    {
        is_prime[i] = 1;
        prime_factors[i] = 1;
    }

    for (int i = 2; i < MAXN; i++)
    {
        if (is_prime[i])
        {
            for (int j = 2*i; j < MAXN; j+=i)
            {
                is_prime[j] = 0;
                prime_factors[j]++;
            }
        }
    }  
}

int main(){
    precompute();
    int t;
    cin >> t;

    while(t--){
        int a,b,n;
        cin >>a >> b>>n;
        int ans = 0;
        for (int i = a; i<= b;i++){
             if (prime_factors[i]==n)
             {
                 ans++;
             }
             
        }
            cout << ans;

    }
}
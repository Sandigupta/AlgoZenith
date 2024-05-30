#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(floor(log2(n))==ceil(log2(n)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 1; i * i <= n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i*i!=n)
                v.push_back(n / i);
        }
    }
    for ( auto it:v)
    {
        cout << it << " ";
    }
    cout << "\n";
}
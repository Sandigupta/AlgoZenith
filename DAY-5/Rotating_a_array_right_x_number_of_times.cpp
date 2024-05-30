#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    vector<int> v2(n);
    for (int i = 0; i < n;i++){
        v2[i] = v[(i - x + n) % n];
    }

    for (int i = 0; i < n;i++){
        cout << v2[i] << " ";
    }
    cout << endl;
}
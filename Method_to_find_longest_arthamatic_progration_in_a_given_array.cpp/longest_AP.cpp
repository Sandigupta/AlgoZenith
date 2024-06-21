
/*Description
You are given an array A of N integers. You have to choose a contiguous arithmetic subarray with equal difference between consecutive integers, that has the maximum length. Find the maximum possible length.

Input Format
The first line of the input contains one integer T - the number of test cases. Then T test cases follow.

The first line of each test case contains one integer N - the length of the array.

The second line of each test case contains N space-separated integers.

Output Format
For each test case, print the maximum possible length.

Constraints
1 ≤ T ≤ 105

2 ≤ N ≤ 105

-107 ≤ Ai ≤ 107

It is guaranteed that the sum of N over all test cases does not exceed 105.
*/


// Write your code here

// you can set your Template at profile settings [https://maang.in/profile/template-code]
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int r=v[1]-v[0];
        int cnt=2;
        int max_pos_len=2;
        for(int i=2;i<n;i++){
            if(v[i]-v[i-1]==r){
                cnt++;
            }else{
                cnt=2;
                r=v[i]-v[i-1];
            }
            max_pos_len=max(max_pos_len,cnt);
        } 
        cout<<max_pos_len<<"\n"; 
         
    } 
}     
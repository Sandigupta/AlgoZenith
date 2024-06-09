/*1. Problem: Given an array of integers arr and an integer k, write a function to print the minimum element of each k-size subarray.
One approach could be using multiset.

Algorithm Explanation:

Start iterating through the array arr from index 0 to n-1, where n is the size of the array.
Check if the current index i is greater than or equal to k. If true, it means we have a k-size window to consider.
Remove the element at index i - k from the multiset. This ensures that the multiset always contains elements from the current window.
Check if the current index i is greater than or equal to k - 1. If true, it means we have a valid k-size window.
Print the minimum element of the current k-size window, which is the value at *s.begin().

*/

/*..............................................BRUTE FORCE APPROCH................................................
 */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,k;
//     cin >> n>>k;

//     vector<int> v(n);
//     for (int i = 0; i < n;i++){
//         cin >> v[i];
//     }

//     for (int i = 0; i <= n-k;i++){
//         int min_ele = v[i];
//         for (int j = i; j < k+i;j++){
//             min_ele = min(v[j], min_ele);
//         }
//          cout << min_ele << " ";
//     }
// }

// TIME COMPLEXCITY OF O(n.k)


/*..................................USING SLIDING WINDOW CONCEPT USING MAP............................................
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)     //O(n)
    {
        cin >> v[i];
    }

    multiset<int> mp;
    for (int i = 0; i < n; i++)  //O(n)
    {
        mp.insert(v[i]);         //log(k)   

        if ((i - k) == 0)
        {
            mp.erase(mp.find(v[i - k]));   //log(k)
        }
        if (mp.size() == k)
        {
            cout << *mp.begin() << " ";     //o(1)
        }
    }
}




// Time complexcity of........... O(nlog(k))
/*Time Complexity is O(nlogk) as the time complexity of the insert and erase operations in 
a multiset is O(log k), where k is the size of the multiset. Why logk not logn? because the 
size of a multiset is always k.
*/
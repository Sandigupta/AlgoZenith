/*
2. Problem: Count the number of subarray with sum = 'x'.
Idea we use is that we have to find no. of subarray (L,R) such that it follow 2 conditions:

L<=R
P[R]-P[L-1]==x , where P[] is a prefix sum array.
Algorithm Explanation:

Input: Read the array size n and target sum x. Input array elements and compute the prefix sum array.

Initialize: Set ans to 0 for counting subarrays. Use a map to store prefix sum frequencies.

Count Subarrays: Iterate through the array, calculating the prefix sum. Check if prefix[r] - x exists in the map; if yes, add its frequency to ans. Increment the frequency of the current prefix sum in the map.

Output: Print the count of subarrays with a sum equal to x.

TIME COMPLEXCITY:-
Time Complexity: O(N) or O(NlogN) depending on which map data structure we are using, 
if we are using an unordered_map data structure the time complexity will be O(N) but 
if we are using a map data structure, the time complexity will be O(NlogN).
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i)
            v[i] += v[i - 1];
    }

    int cnt = 0; //Number of subarray whoes sum equal to k.
    map<int, int> mp;
    mp[0]++;
    for (int i = 0; i < n; i++)
    {
        cnt += mp[v[i] - k];

        mp[v[i]]++;
    }

    cout << cnt << "\n";
}
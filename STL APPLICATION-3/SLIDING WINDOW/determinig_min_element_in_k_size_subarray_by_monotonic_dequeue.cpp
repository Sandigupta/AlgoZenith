#include<bits/stdc++.h>
using namespace std;

struct monotonic_deq{
    deque<int> dq;
    void inserting(int x){
        while (!dq.empty() && dq.back()>x)
        {
            dq.pop_back();
        }  
        dq.push_back(x);
    }

    int getmin(){
        return dq.front();
    }

    void remove(int x){
        if(!dq.empty() && dq.front()==x){
            dq.pop_front();
        }
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n>>k;

    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    monotonic_deq mt;

    for (int i = 0; i < n;i++){
        mt.inserting(v[i]);
        if((i-k)>=0){
            mt.remove(v[i-k]);
        }
        if(i>=(k-1)){
            cout<<mt.getmin()<<" ";
        }
    }
}


/*The time complexity is O(n), where n is the size of the array. The easy way to understand the complexity
 is that at each element two operations are done, one is insertion and second is pop, nothing else.
*/







// #include <bits/stdc++.h>
// using namespace std;

// struct monotone_deque
// {
//     deque<int> dq;

//     void insert(int x)
//     { // O(k)
//         while (!dq.empty() && dq.back() > x)
//             dq.pop_back();
//         dq.push_back(x);
//     }
//     void erase(int x)
//     { // O(1)
//         if (dq.front() == x)
//             dq.pop_front();
//     }
//     int getmin()
//     { // O(1)
//         return dq.front();
//     }
// };


// int main()
// { // O(n)
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     monotone_deque mt;
//     for (int i = 0; i < n; i++)
//     {                      // O(n)
//         mt.insert(arr[i]); // O(1)
//         if ((i - k) >= 0)
//             mt.erase(arr[i - k]); // O(1)
//         if (i >= (k - 1))
//             cout << mt.getmin() << endl; // O(1)
//     }
// }

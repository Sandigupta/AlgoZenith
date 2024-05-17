#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;

    int str = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {  
           if(i==j%8 || i+j%8==8 ){
               cout << char(str+j);
            //    str++;
           }else{
               cout << " ";
           }
        }
        cout << endl;
    }
    

}
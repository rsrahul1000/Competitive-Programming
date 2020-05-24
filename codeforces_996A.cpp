//https://codeforces.com/problemset/problem/996/A
// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;
 
//Using Non recursion
// int main(){
//     long int n;
//     cin >> n;
//     int a = 0;
//     std::vector<int> v = {100,20,10,5};
//     //ll temp = n/100 + (n/20)%5 + (n/10)%2 + (n/5)%2 + n%5;
//     for (auto i:v){
//         a+=n/i;
//         n%=i;
//         cout << a << "\t" << n << endl;
//      }
//     cout << a+n << endl;
//     return 0;
// }

//Using Recurssion
int solve(long int value, int doc[], int i){
    if(i<0 || value <=0) return INT_MAX;
    if(value == 0) return 0;
    while(doc[i] > value && i !=0) i--;
    if(value%doc[i] == 0) return value/doc[i];
    else{
        return min((int)value/doc[i] + solve(value%doc[i], doc, i-1), solve(value, doc, i-1));
    }
}

int main(){
    long int temp;
    cin >> temp;
    int doc[] = {1,5,10,20,100};
    cout << solve(temp, doc, 4) << endl;
    return 0;
}
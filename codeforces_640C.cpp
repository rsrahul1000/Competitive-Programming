// Created by Rahul Sharma
#include <bits/stdc++.h>

#define loop(i,n) for(int i=0;i<(n);++i)	

using namespace std;
using ll = long long;

int main(){
    ll t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(k%(n-1) == 0) cout << n*((k/(n-1))-1) + (n-1) << endl;
        else cout << n*(k/(n-1)) + (k%(n-1)) << endl;
    }
    return 0;
}	
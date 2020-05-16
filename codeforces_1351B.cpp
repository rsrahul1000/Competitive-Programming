// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, a1,b1,a2,b2;
    cin>>t;
    while(t--){
        cin>>a1 >> b1>> a2>> b2;

    	if ( (a1==a2) && (b1+b2==a1) || (a1 == b2)&&(b1+a2==a1) || (b1==a2)&&(a1+b2==a2) ||
    		(b1 == b2)&&(a1+a2==b2)) cout << "YES";
    		else cout << "NO";
        cout<<'\n';
    }
    return 0;
}
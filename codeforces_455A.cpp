// // https://codeforces.com/problemset/problem/455/A
// // Created by Rahul Sharma
// #include <bits/stdc++.h>

// #define rep(i,n) for(int i=0;i<(n);++i)
// #define repA(i,a,n) for(int i=a;i<=(n);++i)
// #define repD(i,a,n) for(int i=a;i>=(n);--i)

// using namespace std;
// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     ll n, ans=0, tmax, x;
//     cin>>n;
//     //vector<ll> a(n);
//     vector<ll> v(n+1), t(n+1);
//     set<ll> s;
//     rep(i,n) {
//     	cin>>x;
//     	++v[x];
//     	s.insert(x);
//     }
//     //for(int i:s) cout << i << " ";
//     for(ll i: s){
//      	t = v;
//     	tmax = t[i]*i;
//     	t[i]=t[i+1]=t[i-1]=0;
//     	for(ll j: s){
//     		if (i==j) continue;
//     		if(t[j]>0){
//     			tmax += t[j]*j;
//     			t[j]=t[j+1]=t[j-1]=0;
//     		}
//     	}
//     	//cout << tmax << " " << ans << endl;
//     	ans = max(ans, tmax);
//     }
//     //This gives time limit exceeding on test case 11
//     // for (int i = 1; i<t.size(); i++){
//     // 	t = v;
//     // 	tmax = t[i]*i;
//     // 	t[i]=t[i+1]=t[i-1]=0;
//     // 	for (int j = 1; j<t.size(); j++){
//     // 		if(t[j]>0){
//     // 			tmax += t[j]*j;
//     // 			t[j]=t[j+1]=t[j-1]=0;
//     // 		}
//     // 	}
//     // 	ans = max(ans, tmax);
//     // }
//     cout << ans;
//     cout<<'\n';
    
//     return 0;
// }

// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long int;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, x, a, b, t;
    cin>>n;
    vector<ll> v(100001);

    rep(i, n) {
    	cin >> x;
    	v[x] += x;
    }
    // for (int i: v) cout << i << " ";
    // cout << endl;
    a=b=0;
    for(ll i: v){
    	t = a;
    	a = max(a, i+b);
    	b = t;
    	//cout << a << " " << i << " " << b << endl;
    }

    cout << a << endl;
    return 0;
}
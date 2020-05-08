// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; 
    
    cin>>n>>m;
    vector<ll> v(m);
    v[0]=1;
    rep(i,m) cin>>v[i];
    auto ip = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), ip));
    ll count = 0;
    
	count += v[0]-1;
	for (ll i=0; i<v.size()-1; i++){
        if (v[i+1]>v[i]){
        	if(i==v.size()-1){
        		cout << count;
        		return 0;
        	}
        	count += v[i+1] - v[i];
        }
        else
        	count += n + v[i+1] - v[i];
    }
	cout << count << '\n';
    
    return 0;
}
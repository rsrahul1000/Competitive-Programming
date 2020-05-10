// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;
using ll = long long;

bool isZero (int i) {
    return i == 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, size, k, count;
    cin>>t;
    vector<ll> v(t);
    rep(i,t) {
    	cin>>v[i];
    	k=0;
    	count = 0;
    	size = trunc(log10(v[i])) + 1;
    	vector <ll> a(size);
    	for (int j=10; j<=pow(10,size+1); j*=10){
    		if(v[i]%j!=0){
    			a.push_back(v[i]%j);
    			v[i] -= v[i]%j;
    			count++;
    		}
    	}
    	cout << count << endl;
    	auto newIter = remove_if( a.begin() , a.end() , isZero);
    	a.resize(distance(a.begin(), newIter));
    	for (auto x:a) cout << x << " "; 
    	cout <<endl;
	}
    
    return 0;
}
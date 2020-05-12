//https://codeforces.com/problemset/problem/1283/C
// Created by Rahul Sharma
#include <bits/stdc++.h>
 
#define rep(i,n) for(int i=0;i<(n);++i)
 
using namespace std;
using ll = long long;
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> v(n), f(n + 1), z,q;
	rep(i, n) {
		cin >> v[i];
		f[v[i]]++;
		if (v[i] == 0) z.push_back(i+1);
	}
	rep(i,n+1) if (f[i]==0) q.push_back(i); 
 
	int t = 0;
	for (int i=0; i<z.size(); i++){
		for(int j=0; j<q.size(); j++){
			if(z[i]==q[j] && q.size()==1){
				v[z[i]-1] = v[t];
				v[t] = q[j];
			}
			else if(z[i]==q[j]){
				continue;
			}
			else{
				v[z[i]-1] = q[j];
				t = z[i]-1;
				q.erase(q.begin() + j);
				break;
			}
		}
	}
 
	for (auto x : v) cout << x << " ";
 
	return 0;
}
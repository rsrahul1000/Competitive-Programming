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
	vector<int> v(n), f(n + 1);
	unordered_set<int> q, z;	//this takes O(1) to insert an element
	rep(i, n) {
		cin >> v[i];
		f[v[i]]++;
		if (v[i] == 0) z.insert(i+1);
	}
	rep(i,n+1) if (f[i]==0) q.insert(i); 
 
	int t = 0;
	//for (int i=0; i<z.size(); i++){
	for (int x:z ) {
		//for(int j=0; j<q.size(); j++){
		for (int y:q ) {
			if(x==y && q.size()==1){
				v[x-1] = v[t];
				v[t] = y;
			}
			else if(x==y){
				continue;
			}
			else{
				v[x-1] = y;
				t = x-1;
				auto it = q.find(y);
				q.erase(it);
				//q.erase(q.begin() + j);
				break;
			}
		}
	}
 
	for (auto x : v) cout << x << " ";
 
	return 0;
}
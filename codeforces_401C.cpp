//https://codeforces.com/problemset/problem/401/C
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
    int n, m, c=0;
    cin >> n >> m;

	if(n-1>m || m>2*(n+1)){
		cout << "-1\n";
		return 0;
	}
	else{
		m -= n-1;
		if(m==0){
			cout << "0";
			while(n-1!=c) cout << "10", c++;
		}
		else if (m-1<=n) {
			while(c!=m-1) cout << "110", c++;
			c=0;
			while(n-m+1!=c) cout << "10", c++;
		}
		else{
			while(n!=c) cout << "110", c++;
			c=0;
			while(m-1-n!=c) cout << "1", c++;
		}
	}
	cout << endl;
    return 0;
}
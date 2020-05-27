// https://codeforces.com/contest/456/problem/A
// Created by Rahul Sharma
#include <bits/stdc++.h>
//#include<conio.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, x, y;
	cin >> n;
	map<int, int> m;
	bool flag = false;
	rep(i, n) {
		cin >> x >> y;
		//m.insert(pair<int, int>(x, y));
		if (x<y) flag = true;
	}
	if (flag) cout << "Happy Alex";
	else cout << "Poor Alex";
	cout << '\n';
	
	//_getch();
	return 0;
}
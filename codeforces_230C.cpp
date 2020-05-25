// Created by Rahul Sharma
#include <bits/stdc++.h>
//#include<conio.h>
#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;
using ll = long long;

// In-place rotates s towards left by d 
vector<string> leftrotate(string &s, int d, vector<string> v)
{
	reverse(s.begin(), s.begin() + d);
	reverse(s.begin() + d, s.end());
	reverse(s.begin(), s.end());
	return v;
}

// In-place rotates s towards right by d 
vector<string> rightrotate(string &s, int d, vector<string> v)
{
	leftrotate(s, s.length() - d, v);
	return v;
}

int findMin(vector<string> &v, int count) {
	bool flag = true;
	rep(j, v[0].length()) {
		rep(i, v.size()) {
			if (v[i][j] != '1') {
				flag = false;
				break;
			}
		}
		if (flag) return 1;
	}
	if (flag == false) return count + 1;
	rep(i, v.size()) {
		count = min(1 + findMin(leftrotate(v[i], 1, v), count),
			(1 + findMin(rightrotate(v[i], 1, v), count)));
	}
	return count;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	bool flag = true;
	string s;

	vector<string> v(n);
	rep(i, n) {
		cin >> v[i];
		auto findOne = v[i].find('1');
		if (findOne == string::npos) {
			cout << "-1";
			break;
		}
	}
	cout << findMin(v, 1);
	cout << '\n';
	//_getch();
	return 0;
}
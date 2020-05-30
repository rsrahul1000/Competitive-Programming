// https://codeforces.com/problemset/problem/110/A
// Created by Rahul Sharma
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int n = s.length(), i = 0, count = 0;
	//vector<int> v(n);
	while (n--) {
		//cout << s[i] - '0' << " ";
		if(count>7) {
			cout << "NO\n";
			return 0;
		}
		if (s[i] - '0' == 7 || s[i] - '0' == 4) {
			count++;
		}
		i++;
	}
	if(count==4 || count==7) cout << "YES\n";
	else cout << "NO\n";

	return 0;

}
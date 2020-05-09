// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)

using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	vector<int> f(n + 1);
	for (int i = 0; i<n; i++)
		f[a[i]]++;

	int ans = 0;
	vector<int> pre;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j<pre.size(); j++)
			pre[j] += a[i];
		pre.push_back(a[i]);

		for (int j = 0; j + 1<pre.size(); j++) {
			if (pre[j] <= n) {
				ans += f[pre[j]];
				f[pre[j]] = 0;
			}
		}
	}
	cout << ans << endl;
}

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
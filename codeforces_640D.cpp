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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		rep(i, n) cin >> v[i];

		int l = 1, r = v.size() - 1;
		int move = 1, Asum = v[0], Bsum, count = 1, at=v[0], bt=0;

		while (l <= r) {
			if (move == 0) {
				Asum = v[l++];
				if (Asum <= Bsum) {
					while (l <= r) {
						Asum += v[l++];
						if (Asum>Bsum) break;
					}
				}
				at += Asum;
				count++;
				move = 1;
			}
			else {
				Bsum = v[r--];
				if (Bsum <= Asum) {
					while (l <= r) {
						Bsum += v[r--];
						if (Bsum>Asum) break;
					}
				}
				bt += Bsum;
				count++;
				move = 0;
			}
		}
		if (v.size() == 1) {
			cout << count << " " << at << " " << bt << endl;
			continue;
		}
		cout << count << " " << at << " " << bt;
		cout << '\n';
	}
	return 0;
}
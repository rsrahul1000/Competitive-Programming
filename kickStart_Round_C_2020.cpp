#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, j = 1, count_ = 0, loop, searching;
	cin >> T;
	while (T--) {
		int value;
		cin >> loop;
		cin >> searching;
		vector<int>v;
		for (int i = 0; i<loop; i++) {
			cin >> value;
			v.push_back(value);
		}
		int temp = searching;
		for (int i = 0; i<(loop - 1); i++) {
			if (v[i] == temp&&v[i + 1] == v[i] - 1)
			{
				temp = v[i + 1];
				if (v[i + 1] == 1) {
					++count_;
					temp = searching;
				}
			}
			else
				temp = searching;
		}
		cout << "Case #" << j << ": " << count_ << "\n";
		++j; count_ = 0;
	}
	return 0;
}
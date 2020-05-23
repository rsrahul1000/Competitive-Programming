//https://codeforces.com/problemset/problem/1305/C
// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<(n);++i)

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n), dublicateCheck(m);
    rep(i, n) cin>>v[i],  ++dublicateCheck[v[i] % m];
    rep(i, m) {
        if (dublicateCheck[i] > 1) {
            cout << "0";
            return 0;
        }
    }
    ll ans = 1;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            ans = (ans * abs(v[i] - v[j])) % m;
    cout << ans << '\n';
    return 0;
}
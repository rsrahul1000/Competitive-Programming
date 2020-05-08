// Created by Rahul Sharma
#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<(n);++i)

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, l;
    double maxDiff=-1;
    cin >> n >> l;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end());
    maxDiff=max(a[0],0)*2;
    repA(i,1,n) maxDiff=max(maxDiff, (double)abs(a[i]-a[i-1]));
    maxDiff=max(maxDiff, (double)(l-a[a.size()-1])*2); 
    printf("%.10f\n",maxDiff/2);

    return 0;
}
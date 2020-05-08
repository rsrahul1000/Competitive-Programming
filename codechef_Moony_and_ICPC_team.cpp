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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        rep(i,n) cin>>v[i];
        ll ans = 0;
        if (n<6) {
            //get top 3 maximum numbers
            nth_element(v.begin(), v.begin() + 2, v.end(), greater<ll>()); 
            for(int i=0;i<3;++i) ans+=v[i];
            cout << ans << endl;
        }
        else {
            for(int i = 0 ; i < n ; i ++){
                ll sum = 0;
                for(int j = i ; j < (i + 3) ; j++){
                    // j%n enables circular array accessing
                    sum += v[j%n];
                }
                ans = max(ans , sum);
            }
            cout<<ans << endl;
        }
    }
    return 0;
}


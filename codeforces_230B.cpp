// Created by Rahul Sharma
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

const int mx        = 1e7+10;
const int inf       = 0x3f3f3f3f;
const int mod       = 1e9+7;

// bool mark[mx];
// set<ll> prime;
// //Find all the prime numbers till the mx limit
// void sieve()
// {
//     memset(mark,true,sizeof(mark));
//     for(ll i=3; i<=(ll)sqrt(mx); i+=2)
//     {
//         if(mark[i])
//         {
//             for(ll j=i*i; j<=mx; j+=2*i)
//                 mark[j]=false;
//         }
//     }
//     prime.insert(2);
//     for(ll i=3; i<=mx; i+=2)
//         if(mark[i])
//             prime.insert(i);
// }
///code start here
int main(){
//     sieve();
//     int n;
//     cin >> n; 
//     ll a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> a[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         ll k = sqrt(a[i]);
//         if(prime.count(k)!=0 && k*k==a[i])
//             cout <<"YES"<<endl;
//         else
//             cout << "NO" <<endl;
//     }
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        ll n;
        cin >> n;
        bool flag = false;
        ll rootVal;
        rootVal = (ll) sqrt(n);
        if (rootVal * rootVal == n)
        {
            flag = true;
            for (int j = 2; j * j <= rootVal; ++j)
                if (rootVal % j == 0)
                {
                    flag = false;
                    break;
                }
        }
        if (n == 1) flag = false;
        if (flag) cout << "YES" << endl;
        else if (!flag) cout << "NO" << endl;
    }
    return 0;
}
//My Try
// bool is_tprime(ll n){
// 	int cnt = 2;
//     if (n <= 1)
//         return false;
//     if (n == 2)
//         return false;
//     if (n == 3)
//     	return false;
//     if (n > 2 && n % 2 == 0) 
//         cnt++;
//   	if(n > 2 && n % 3 == 0)
//   		cnt++;

//     ll max_div = ceil(sqrt(n)); 
//     for (ll i=4; i<=max_div+1; i++){
//     	if(n%i==0){
//     		cnt++;
//     		break;
//     	}
//     }
//     if (cnt==3) return true;
//     return false;
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//     	ll n;
//         cin >> n;
//         if(is_tprime(n)) cout << "YES\n";
//         else cout << "NO\n";
//     }
//     return 0;
// }
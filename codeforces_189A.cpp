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
    int i,j,k,n;
    int a,b,c;
    int x,y,z;
 
    cin>>n>>a>>b>>c;
 
    //array to memoize values
    vector<int> dp(n+1);
 
    //initialize
    //dp[0]=0;
 
    for(i=1;i<=n;i++)
    {
        x=y=z=-1;
 
        if(i>=a)
            x=dp[i-a];
 
        if(i>=b)
            y=dp[i-b];
 
        if(i>=c)
            z=dp[i-c];
 
        if(x==-1 && y==-1 && z==-1)
            dp[i]=-1;
 
        else
            dp[i]=max(max(x,y),z)+1;
    }
 
    if(dp[n]==-1)
        cout<<"Not possible";
 
    else
        cout<<dp[n];
 
    cout<<endl;
    for(auto i : dp) cout << i << " ";
    cout << endl;
    return 0;
}
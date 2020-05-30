#include<bits/stdc++.h>
using namespace std;
int n,x,a,b;
int main(){
	for(cin>>n ; n-- ;) cin>>x, x ? b=max(b+1,a+1) : a++;
	cout<<max(a,b);
}

// #include<iostream>
// using namespace std;
// main(){
// 	int n;
// 	cin>>n;
// 	int a=0,b=0;
// 	while(n--){
// 		int in;
// 		cin>>in;
// 		if(in)
// 			b=max(b+1,a+1);
// 		else a++;
// 	}
// 	cout<<max(a,b);
// }
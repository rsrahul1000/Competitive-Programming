// // https://codeforces.com/contest/456/problem/A
// // Created by Rahul Sharma
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main()
// {
// 	ios::sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);
// 	int n, x, y;
// 	cin >> n;
// 	bool flag = false;
// 	rep(i, n) {
// 		cin >> x >> y;
// 		if (x<y) flag = true;
// 	}
// 	if (flag) cout << "Happy Alex";
// 	else cout << "Poor Alex";
// 	cout << '\n';
// 	return 0;
// }

#include <bits/stdc++.h>

#define loop(i,n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;

class point{
public:
	int price, quality;
	point(int _price, int _quality){
		price = _price;
		quality = _quality;
	}
};

class compare{
public:
	bool operator () (const point &a, const point &b){
		return a.quality < b.quality;
	}
};

class compare_price{
public:
	bool operator () (const point &a, const point &b){
		return a.price < b.price;
	}
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    vector<point> data;
    int temp1, temp2;
    if(t <=1){
    	cout << "Poor Alex" << endl;
    	return 0;
    }
    loop(i,t){
    	cin >> temp1 >> temp2;
 		data.push_back(point(temp1, temp2));
    }
    sort(data.begin(), data.end(), compare_price());
    sort(data.begin(), data.end(), compare());
   	temp1=0;
   	while(temp1!=t-1){
	    bool flag = false;
   		while(temp1 != t-1 && data[temp1].quality == data[temp1+1].quality)
   			temp1++,flag=true;
  
   		if(temp1!=t-1 && data[temp1].price > data[temp1+1].price && data[temp1].quality < data[temp1+1].quality){
   			cout << "Happy Alex" << endl;
   			return 0;
   		}
		if(!flag) temp1++;
   	}
	if(temp1 == t-1) cout << "Poor Alex" << endl;
    return 0;
}
#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

#define pb push_back
#define int long long
#define mp make_pair
#define pii pair<int,int>
#define vi 	vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(t) int t;cin>>t; while(t--)
#define len(arr,data) sizeof(arr)/sizeof(data)

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{

		int x, y, n, k = 0;
		cin >> x >> y >> n;
		//int ans=n/x;
		k = n - ((n - y) % x);
		cout << k << endl;
	}
	return 0;
}
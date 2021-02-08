#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<list>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
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
#define f(i,n) for(int i=0;i<n;i++)

bool cmpfn(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.second == p2.second)
		return p1.first < p2.first;
	return p1.second < p2.second;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<pair<int, int>> v1;
	f(i, n)
	{
		int c, r;
		cin >> c >> r;
		v1.pb(mp(c - r, c + r));
	}
	sort(v1.begin(), v1.end(), cmpfn);
	int cnt = 0;
	int cur = v1[0].second;
	for (int i = 1; i < n; ++i)
	{
		if (v1[i].first >= cur)
		{
			cur = v1[i].second;
		}
		else
		{
			cnt++;
		}
	}
	cout << cnt << endl;



	return 0;
}
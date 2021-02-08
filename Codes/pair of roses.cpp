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

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{
		int n; cin >> n;
		mk(arr, n, int);
		f(i, n)
		cin >> arr[i];
		int money; cin >> money;
		sort(arr, arr + n);
		vector<pair<int, int>> v1;
		int l = 0;
		int r = n - 1;
		int sum = 0;
		while (l <= r)
		{
			sum = arr[l] + arr[r];
			if (money > sum)
				l++;
			else if (money < sum)
				r--;
			else
			{
				v1.pb(mp(l, r));
				l++;
				r--;
			}
		}
		int diff = abs(v1[0].first - v1[0].second);
		int ans;
		int j;
		cout << v1.size() << endl;;
		for (j = 1; j < v1.size(); j++)
		{
			if (abs(v1[j].first - v1[j].second) < diff)
			{
				diff = abs(v1[j].first - v1[j].second);
				ans = j;
			}
		}
		cout << "Deepak should buy roses whose prices are " << arr[v1[ans].first] << " and " << arr[v1[ans].second] << "." << endl;

	}
	return 0;
}
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
#define f(i,n)  for(int i=0;i<n;i++)

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{
		int n, x;
		cin >> n >> x;
		mk(arr, n, int);
		f (i, n)
		cin >> arr[i];
		sort(arr, arr + n);
		mk(dp, n + 1, int);
		f(k, n + 1)
		dp[k] = 0;
		for (int j = n - 1; j >= 0; j--)
		{
			int req;
			if (x % arr[j] == 0)
			{
				req = x / arr[j];
			}
			else
			{
				req = ( x / arr[j]) + 1;
			}
			//int backs = n - j;
			if (j + req > n)
				continue;
			dp[j] = 1 + dp[j + req ] ;
		}
		int ans = *max_element(dp, dp + n + 1);
		cout << ans << endl;

	}
	return 0;
}
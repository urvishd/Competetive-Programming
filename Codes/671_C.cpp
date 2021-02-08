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
#include <cmath>
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
		int n, x;
		cin >> n;
		cin >> x;
		int ans ;
		int sum1 = 0;
		int sum2 = 0;
		int in = 0;
		mk(arr, n, int);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];

			if (arr[i] - x < 0)
				sum1 += x - arr[i];
			else if (arr[i] == x)
				in++;
			else
				sum2 += arr[i] - x;
		}
		//cout << sum1 << " " << sum2 << endl;
		if (sum1 == 0 && sum2 == 0)
			ans = 0;
		else if (in > 0 || sum1 == sum2)
			ans = 1;
		else
			ans = 2;

		cout << ans << endl;

	}
	return 0;
}
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
		mk(arr1, n, int);
		mk(arr2, n, int);
		f(i, n)
		cin >> arr1[i];
		f(i, n)
		cin >> arr2[i];
		int min1 = *min_element(arr1, arr1 + n);
		int min2 = *min_element(arr2, arr2 + n);
		int ans = 0;

		f(i, n)
		{
			int diff1 = arr1[i] - min1;
			int diff2 = arr2[i] - min2;
			ans += min(diff1, diff2);
			int var1 = arr1[i] - min(diff1, diff2);
			int var2 = arr2[i] - min(diff1, diff2);
			if (var1 > min1)
				ans += var1 - min1;
			if (var2 > min2)
				ans += var2 - min2;
		}
		cout << ans << endl;
	}
	return 0;
}
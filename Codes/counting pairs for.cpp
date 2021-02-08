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

	int n, k;
	cin >> n >> k;
	k = -k;
	mk(arr, n, int);
	f(i, n)
	cin >> arr[i];
	int cnt = 0;

	sort(arr, arr + n);

	int l = 0;
	int r = 0;
	while (r < n)
	{
		if (arr[r] - arr[l] == k)
		{
			cnt++;
			l++;
			r++;
		}
		else if (arr[r] - arr[l] > k)
		{
			l++;
		}
		else
		{
			r++;
		}
	}
	cout << cnt << endl;
	return 0;
}
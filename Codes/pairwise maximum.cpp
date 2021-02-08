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

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{
		int n;
		cin >> n;
		mk(arr, n, int);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int cnt1 = 1;
		int j;
		for (j = n - 1; j > 0; j--)
		{
			if (arr[j - 1] <= arr[j])
				cnt1++;
			else
				break;
		}
		int cnt2 = 1;
		for (j = n - 1; j > 0; j--)
		{
			if (arr[j - 1] >= arr[j])
				cnt2++;
			else
				break;
		}
		int cnt3 = 1;
		int cnt4 = 0;
		for (j = n - 1; j > 0; j--)
		{
			if (arr[j - 1] >= arr[j])
				cnt3++;
			else
				break;
		}
		for (int k = j ; k > 0; k--)
		{
			if (arr[k - 1] <= arr[k])
				cnt4++;
			else
				break;
		}
		cout << min(min(n - cnt1, n - cnt2), n - (cnt3 + cnt4)) << endl;

	}
	return 0;
}
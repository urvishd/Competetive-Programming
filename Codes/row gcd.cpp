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
#define int unsigned long long
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

int GCD(int x, int y)
{
	if (x == 0)
		return y;
	return GCD(y % x, x);

}

int findGCD(float arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = GCD(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	mk(arr1, n, int);
	mk(arr2, m, int);
	f(i, n)
	cin >> arr1[i];
	f(i, m)
	cin >> arr2[i];

	mk(temp, m, float);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			temp[j] = arr1[j] + arr2[i];
		}

		/*for (int j = 0; j < m; j++)
		{
			cout << temp[j] << " ";
		}
		cout << endl;*/

		int ans = findGCD(temp, m);
		cout << ans << " ";
	}


	return 0;
}
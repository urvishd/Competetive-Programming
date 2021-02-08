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
		int n; cin >> n;
		mk(r, n, int);

		int max1 = 0, max2 = 0;
		f(i, n)
		{
			cin >> r[i];
			if (i == 0 && r[i] >= 0)
			{
				max1 = r[i] ;
			}
			if (i > 0)
			{
				r[i] += r[i - 1];
				if (r[i] > max1)
					max1 = r[i];
			}
		}

		int m; cin >> m;

		mk(b, m, int);
		f(i, m)
		{
			cin >> b[i];
			if (i == 0 && b[i] >= 0)
			{
				max2 = b[i] ;
			}
			if (i > 0)
			{
				b[i] += b[i - 1];
				if (b[i] > max2)
					max2 = b[i];
			}
		}

		cout << max1 + max2 << endl;


	}
	return 0;
}
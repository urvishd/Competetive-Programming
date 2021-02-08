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
		int n; cin >> n;
		int a, b, flag = 0;
		if (n % 2 == 0)
		{
			cout << n / 2 << " " << n / 2 << endl;
		}
		else
		{
			for (int i = 2; i * i <= n; i++)
			{
				if (n % i == 0)
				{
					flag = 1;
					a = n / i;
					b = n - (n / i);
					cout << a << " " << b << endl;
					//break;
				}
				if (flag == 1)
					break;
			}
			if (flag == 0)
			{
				cout << 1 << " " << (n - 1) << endl;
			}
		}



	}
	return 0;
}
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
		int ans = 0;
		int three = 0, five = 0; seven = 0;
		if (n == 3)
			three++;
		else if (n == 5)
			five++;
		else if (n == 7)
			seven++;
		else if (n < 7)
			ans = -1;
		else
		{
			if (n % 3 == 0)
				three = n / 3;
			else if (n % 5 == 0)
				five = n / 5;
			else if (n % 7 == 0)
				seven = n / 7;
			else
			{
				int a = n / 15;
				int rem = n % 15;
				three = a;
				five = a;
				seven = a;
				if (rem == 7)
					seven++;
				else if (rem == 5)
					five++;
				else if (rem == 3)
				}
		}
	}
	return 0;
}
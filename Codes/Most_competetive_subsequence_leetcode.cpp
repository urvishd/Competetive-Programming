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

string convert(string s, int numRows) {

	int shift = numRows + (numRows - 2);

	string ans = "";
	int l = s.length();

	if (numRows == 1)
		shift = 1;
	else if (numRows == 2)
		shift = 2;

	for (int i = 0; i < l;)
	{
		ans += s[i];
		i += shift;
	}

	int j1, j2, k1, k2;
	k1 = shift - 2; k2 = shift;


	if (numRows > 1)
	{
		for (int r = 1; r < numRows - 1; r++)
		{
			j1 = k1;
			j2 = k2;
			ans += s[r];

			while (j1 < l or j2 < l)
			{
				if (r + j1 < l)
				{
					ans += s[r + j1];
				}
				if (r + j2 < l)
				{
					ans += s[r + j2];
				}
				j1 += shift;
				j2 += shift;
			}
			k1 = k1 - 2;
		}

		int x;
		for (x = numRows - 1; x < l;)
		{
			ans += s[x];
			x += shift;
		}
	}
	return ans;


}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{
		string l; cin >> l;
		int k; cin >> k;


		cout << convert(l, k);


	}
	return 0;
}
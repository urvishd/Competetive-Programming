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
		int n, k;
		cin >> n >> k;
		string s; cin >> s;
		int l = n;
		int ans = 0;
		int lcount = 0;

		f(i, l)
		{
			if (s[i] == 'L')
				lcount++;
		}
		if (k >= lcount)
		{
			ans = (2 * l) - 1;
		}
		else
		{
			for (int j = 0; j < l - 1; j++)
			{
				if (s[j] == 'W' && s[j + 1] == 'L')
				{
					k--;
					s[j + 1] = 'W';
				}
				else if (s[j] == 'L' && s[j + 1] == 'W')
				{
					k--;
					s[j] = 'W';
				}
				if (k <= 0)
					break;
			}
			cout << s << endl;
			if (s[0] == 'W')
				ans++;
			for (int k = 1; k < l; k++)
			{
				if (s[k - 1] == 'W' && s[k] == 'W')
					ans += 2;
				else if (s[k - 1] == 'L' && s[k] == 'W')
					ans++;
				else
					ans += 0;
			}
		}
		cout << ans << endl;

	}
	return 0;
}
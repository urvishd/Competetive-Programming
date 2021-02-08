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
		string s; cin >> s;
		int n = s.length();
		vi zero, one;
		int cnt, flag;
		int l = s.length();
		f(i, n)
		{
			cnt = 1;
			if (s[i] == '1')
				flag = 1;
			else
				flag = 0;
			while (s[i + 1] == s[i])
			{
				cnt++;
				i++;
			}
			if (flag == 1)
				one.pb(cnt);
			else
				zero.pb(cnt);

		}
		/*for (int j = 0; j < one.size(); j++)
			cout << one[j] << " ";
		cout << endl;
		for (int j = 0; j < zero.size(); j++)
			cout << zero[j] << " ";
		cout << endl;
		cout << endl;*/

		int onesize = one.size();
		sort(one.begin(), one.end(), greater<int>());
		int ans = 0;
		for (int j = 0; j < one.size(); j += 2)
		{
			ans += one[j];
		}
		cout << ans << endl;

	}
	return 0;
}
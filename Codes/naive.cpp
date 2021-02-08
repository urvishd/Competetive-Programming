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

	string text, pattern;
	cin >> text >> pattern;
	int n = text.length();
	int m = pattern.length();
	int i, j;

	for (int s = 0; s <= n - m; s++)
	{
		i = 0; j = 0;
		while (j <= m && text[s + i] == pattern[j])
		{
			i++;
			j++;
		}
		if (j == m )
			cout << "pattern found at index " << s + 1 << endl;
	}
	return 0;
}
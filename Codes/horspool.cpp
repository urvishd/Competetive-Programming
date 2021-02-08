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

int find_pat(string text, string pattern)
{
	int n = text.length();
	int m = pattern.length();
	map<char, int> shift;
	for (int i = 'a'; i <= 'z'; i++)
	{
		shift[i] = m;
	}

	int j;
	for (j = 0; j <= m - 2; j++)
	{
		shift[pattern[j]] = m - 1 - j;
	}
	shift['_'] = m;

	j = 0;
	int i;

	while (j + m <= n)
	{
		if (pattern[m - 1] == text[j + m - 1])
		{
			i = m - 2;
			while (i >= 0 && pattern[i] == text[j + i])
				i--;
			if (i == -1)
			{
				return j;
			}
		}
		j = j + shift[text[j + m - 1]];
	}

	return n;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string text, pattern;
	cin >> text >> pattern;
	int ans = find_pat(text, pattern);
	cout << "pattern found at index " << ans + 1;

	return 0;
}
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

char* removeUtil(char *str, char *last_removed)
{
	if (str[0] == '\0' || str[1] == '\0')
		return str;

	if (str[0] == str[1])
	{
		*last_removed = str[0];
		while (str[1] && str[0] == str[1])
			str++;
		str++;
		return removeUtil(str, last_removed);
	}

	char* rem_str = removeUtil(str + 1, last_removed);

	if (rem_str[0] && rem_str[0] == str[0])
	{
		*last_removed = str[0];
		return (rem_str + 1); // Remove first character
	}

	if (rem_str[0] == '\0' && *last_removed == str[0])
		return rem_str;

	rem_str--;
	rem_str[0] = str[0];
	return rem_str;
}

char *remove(char *str)
{
	char last_removed = '\0';
	return removeUtil(str, &last_removed);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{
		char str1[10000];
		cin.get(str1, 10000);
		cout << remove(str1) << endl;
	}
	return 0;
}
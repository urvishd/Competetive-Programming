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
		mk(arr, n, int);
		f(i, n)
		cin >> arr[i];
		int ans = n / 2;
		if (n % 2 == 0)
			ans -= 1;
		vector<int> b(n, -1);

		int id = 0;
		for (int i = 1; i < n; i++)
			b[i++] = arr[id++];
		for (auto it : b)
			cout << it << " ";
		cout << endl;
		f(i, n) {
			if (b[i] == -1) {
				cout << arr[id] << " ";
				b[i] = arr[id++];
			}
		}
		cout << endl;
		for (auto it : b)
			cout << it << " ";


	}
	return 0;
}
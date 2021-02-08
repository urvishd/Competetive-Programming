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

int findLowerBound(int num, int a[], int n)
{
	int lowerBound = -1;

	int s = 0;
	int e = n;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == num) {
			lowerBound = mid;
			e = mid - 1;
		} else if (a[mid] > num) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return lowerBound;
}

int findUpperBound(int num, int a[], int n) {
	int upperBound = -1;

	int s = 0;
	int e = n;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == num) {
			upperBound = mid;
			s = mid + 1;
		} else if (a[mid] > num) {
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return upperBound;
}


int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int s; cin >> s;
	int n;
	mk(arr, s, int);
	f(i, s)
	{
		cin >> arr[i];
	}
	cin >> n;

	f(i, n)
	{
		int e; cin >> e;
		int flag = 0;
		int lb = findLowerBound(e, arr, s);
		int ub = findUpperBound(e, arr, s);
		cout << lb << " " << ub << endl;

	}
	return 0;
}
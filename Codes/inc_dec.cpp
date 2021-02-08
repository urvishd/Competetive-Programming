#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
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
		int n, i, flag = 0;
		cin >> n;
		mk(arr, n, int);
		for (i = 0; i < n; i++)
			cin >> arr[i];
		vi v1, v2;
		unordered_map<int, int> mpp;

		for (i = 0; i < n; i++)
		{
			mpp[arr[i]]++;
			if (mpp[arr[i]] == 1)
			{
				v1.push_back(arr[i]);
			}

			else if (mpp[arr[i]] == 2)
			{
				v2.push_back(arr[i]);
			}
			else
			{
				flag = 1;
				break;
			}
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end(), greater<int>());
		int cnt1 = v1.size();
		int cnt = v2.size();
		if (cnt1 != 0 && cnt != 0)
		{
			if (v1[cnt1 - 1] == v2[0])
				flag = 1;
		}

		if (flag == 0)
		{
			cout << "YES" << endl;
			for (auto it : v1)
				cout << it << " ";
			for (auto it : v2)
				cout << it << " ";
			cout << endl;
		}
		else
			cout << "NO" << endl;


	}
	return 0;
}
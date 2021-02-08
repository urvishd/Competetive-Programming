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
		int n; cin >> n;
		char mat[n][n];
		f(i, n)
		{
			f(j, n)
			{
				cin >> mat[i][j];
			}
		}
		/*f(i, n)
		{
			f(j, n)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}*/
		int l, cnt1, cnt2, cnt3, cnt4, flag = 0;
		int i1, j1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << i << "  " << j << endl;
				i1 = i;
				j1 = j;
				cnt1 = 0;
				cnt2 = 0;
				cnt3 = 0;
				cnt4 = 0;
				while (mat[i][j] == '#' && j < n)
				{
					cnt1++;
					j++;
				}
				j--;
				cout << "i:" << i << " j:" << j << endl;
				while (mat[i][j] == '#' && i < n)
				{
					cnt2++;
					i++;
				}
				if (i > 0)
					i--;
				cout << "i:" << i << " j:" << j << endl;
				while (mat[i][j] == '#' && j >= 0)
				{
					cnt3++;
					j--;
				}
				j++;
				cout << "i:" << i << " j:" << j << endl;
				while (mat[i][j] == '#' && i >= 0)
				{
					cnt4++;
					i--;
				}
				if (i < 0)
					i++;
				cout << "i:" << i << " j:" << j << endl;
				if (i < 0)
					i = 0;
				cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << endl;
				cout << endl;
				if (cnt1 == cnt2 && cnt2 == cnt3 && cnt3 == cnt4 && cnt1 > 0)
				{
					flag = 1;
					break;
				}
				i = i1;
				j = j1;

			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}
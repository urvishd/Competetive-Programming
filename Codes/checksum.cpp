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



int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string data;
	getline(cin, data);


	int i;
	string received_message = "";

	for (i = 0; i < data.length();)
	{
		int sequence_no = int(data[i] - 48);
		int l = int(data[i + 1] - 48);
		//cout << sequence_no << " " << l << endl;
		i += 2;
		string temp = "";
		while (l--)
		{
			temp += data[i];
			i++;
		}

		received_message += temp;
		temp += data[i];
		i++;

		//cout << temp << endl;
		int ans = int(temp[0] - 48) ;
		for (int j = 1; j < temp.length(); j++)
		{
			int a = int(temp[j] - 48) ;
			ans = ans ^ a;

		}
		cout << "Checksum for frame " << sequence_no << " is: " << ans << endl;
		char s1 = char(ans + 48);

		//cout << s1 << endl;


	}

	cout << endl;
	cout << "received message is:" << received_message << endl;

	return 0;
}
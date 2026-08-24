#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define float double
#define endl "\n"
#define pb push_back
#define bp pop_back
#define maxn 1000005
#define mp make_pair
#define fi first
#define se second

using namespace std;

signed main()
{
	faster();
	int t; cin >> t;
	for(int test=1; test<=t; test++)
	{
		cout << "Test " << test << ": ";
		string s; cin >> s;
		stack<int> st;
		for(int i=0; i<=s.size(); i++)
		{
			st.push(i+1);
			if(i == s.size() || s[i] == 'I')
			{
				while(!st.empty())
				{
					cout << st.top();
					st.pop();
				}
			}
		}
		cout << endl;
	}
	return 0;
}

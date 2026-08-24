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
	string s;
	vector<string> v;
	while(getline(cin, s))
	{
		if(s[0] == 's')
		{
			if(v.size() == 0) cout << "empty" << endl;
			else
			{
				for(auto x : v) cout << x << " ";
				cout << endl;
			}
		}
		else
		{
			if(s[1] == 'u')
			{
				string k = "";
				for(int i=5; i<s.size(); i++) k += s[i];
				v.pb(k);
			}
			else v.bp();
		}
	}
	return 0;
}

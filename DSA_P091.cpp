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
#define t() int tc; cin >> tc; while(tc--)

using namespace std;

signed main()
{
	faster();
	t()
	{
		string s, res; cin >> s;
		stack<int> st;
		
		for(int i=0; i<s.size(); i++)
		{
			if(s[i] == '(')
			{
				st.push(res.size());
				res += "0";
			}
			else if(s[i] == ')')
			{
				if(!st.empty())
				{
					res += "1";
					st.pop();
				}
				else res += "-1";
			}
			else res += s[i];
		}
		
		while(!st.empty())
		{
			int pos = st.top();
			st.pop();
			res.replace(pos, 1, "-1");
		}
		
		cout << res << endl;
	}
	return 0;
}

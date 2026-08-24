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
		stack<int> st;
		string s;
		getline(cin >> ws, s);
		int stt = 0;
		for(auto x : s)
		{
			if(x == '(')
			{
				stt++;
				st.push(stt);
				cout << stt << " ";
			}
			else if(x == ')')
			{
				cout << st.top() << " ";
				st.pop();
			}
		}
		
		cout << endl;
	}
	return 0;
}

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
	int q; cin >> q;
	stack<string> st;
	cin.ignore();
	while(q--)
	{
		string s;
		getline(cin, s);
		if(s[1] == 'O')
		{
			if(!st.empty()) st.pop();
		}
		else if(s[1] == 'U')
		{
			string k = "";
			for(int i=5; i<s.size(); i++) k += s[i];
			st.push(k);
		}
		else
		{
			if(st.empty()) cout << "NONE" << endl;
			else cout << st.top() << endl;
		}
	}
	return 0;
}

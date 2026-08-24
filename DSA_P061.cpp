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

void solve()
{
	string s; cin >> s;
	stack<int> st;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == ')' && !st.empty() && s[st.top()] == '(') st.pop();
		else if(s[i] == ']' && !st.empty() && s[st.top()] == '[') st.pop();
		else if(s[i] == '}' && !st.empty() && s[st.top()] == '{') st.pop();
		else st.push(i);
	}
	if(st.empty()) cout << "true" << endl;
	else cout << "false" << endl;
}

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}

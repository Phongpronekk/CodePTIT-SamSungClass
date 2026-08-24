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
		int n; cin >> n;
		vector<int> a(n);
		for(int &x : a) cin >> x;
		vector<int> ans(n);
		stack<int> st;
		
		for(int i=0; i<n; i++)
		{
			while(!st.empty() && a[st.top()] <= a[i]) st.pop();
			
			if(st.empty()) ans[i] = i + 1;
			else ans[i] = i - st.top();
			
			st.push(i);
		}
		
		for(int x : ans) cout << x << " ";
		cout << endl;
	}
	return 0;
}

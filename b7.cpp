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

int n, m;
int q;

void solve()
{
	cin >> n >> m;
	vector<int> a(n);
	for(int &it : a) cin >> it;
	
	while(m--)
	{
		int x; cin >> x;
		for(int &it : a) it ^= x;
		
		unordered_set<int> st(a.begin(), a.end());
		int mex = 0;
		while(st.count(mex)) mex++;
		cout << mex << endl;
	}
	
}

signed main()
{
	faster();
	solve();
	return 0;
}

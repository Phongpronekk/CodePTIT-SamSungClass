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

int n, k;
int a[10005];
string s;
set<string> se;

void solve()
{
	string ans = "";
	for(int i=1; i<=k; i++) ans += s[a[i]];
	se.insert(ans);
}

void Try(int i)
{
	for(int j=a[i-1]+1; j<=n-k+i; j++)
	{
		a[i] = j;
		if(i == k) solve();
		else Try(i+1);
	}
}

void inp()
{
	se.clear();
	
	cin >> s >> k;
	s = " " + s;
	n = (int)s.size() - 1;	
}

signed main()
{
	faster();
	t()
	{
		inp();
		a[0] = 0;
		Try(1);
		
		for(auto x : se) cout << x << endl;
	}
	return 0;
}

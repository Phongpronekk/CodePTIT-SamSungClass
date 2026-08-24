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

int n;
char a[10005];
vector<string> res;

void solve()
{
	string ans = "";
	for(int i=1; i<=n; i++)
	{
		ans += a[i];
	}
	
	res.pb(ans);
}

void Try(int i)
{
	for(char j='A'; j<='B'; j++)
	{
		a[i] = j;
		if(i == n) solve();
		else Try(i+1);
	}
}

signed main()
{
	faster();
	cin >> n;
	Try(1);
	
	for(int i=1; i<res.size()-1; i++) cout << res[i] << endl;
	return 0;
}

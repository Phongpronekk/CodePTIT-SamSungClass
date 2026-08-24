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
int a[100005], inp[100005];
vector<string> res;

void solve()
{
	string ans = "";
	for(int i=1; i<=k; i++)
	{
		ans += to_string(inp[a[i]]) + " ";
	}
	ans.bp();
	res.pb(ans);
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

signed main()
{
	faster();
	cin >> n >> k;
	for(int i=1; i<=n; i++) cin >> inp[i];
	sort(inp, inp+n+1);
	Try(1);
	
	sort(res.begin(), res.end());
	for(auto x : res) cout << x << endl;
	return 0;
}

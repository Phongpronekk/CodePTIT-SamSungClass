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
int a[100005], vs[100005] = {0};
vector<string> inp(100005);
string bias;
vector<string> res;

void solve()
{
	vector<string> ans;
	for(int i=1; i<=n; i++) ans.pb(inp[a[i]]);
	
	if(ans[0] != bias) return;
	string ans2 = "";
	for(auto x : ans) ans2 += x + " ";
	res.pb(ans2);
}

void Try(int i)
{
	for(int j=1; j<=n; j++)
	{
		if(!vs[j])
		{
			a[i] = j;
			vs[j] = 1;
			if(i == n) solve();
			else Try(i+1);
			
			vs[j] = 0;
		}
	}
}

signed main()
{
	faster();
	cin >> n;
	for(int i=1; i<=n; i++) cin >> inp[i];
	cin >> bias;
	
	Try(1);
	sort(res.begin(), res.end());
	for(auto x : res) cout << x << endl;
	return 0;
}

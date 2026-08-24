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
vector<string> name;
string sub;
int vs[10005] = {0};
vector<string> a;
vector<string> res;

void inp()
{
	cin >> n;
	name.resize(n+1);
	a.resize(n+1);
	for(int i=1; i<=n; i++) cin >> name[i];
	
	cin >> sub;
}

void solve()
{
	string ans = "";
	for(int i=1; i<=n; i++)
	{
		if(a[n] != sub) return;
		
		ans += a[i] + " ";
	}
	
	res.pb(ans);
}

void Try(int i)
{
	for(int j=1; j<=n; j++)
	{
		if(!vs[j])
		{
			a[i] = name[j];
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
	inp();
	Try(1);
	
	sort(res.begin(), res.end());
	for(auto x : res) cout << x << endl;
	return 0;
}

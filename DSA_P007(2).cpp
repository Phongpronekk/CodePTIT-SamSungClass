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

string s;
char a[100005]; 
int vs[100005] = {};
vector<char> res;

void solve()
{
	int n = s.size();
	for(int i=0; i<n; i++)
	{
		if(a[0] == '0')
		{
			for(int i=1; i<n; i++) cout << a[i];
			cout << endl;
			return;
		}
		cout << a[i];
	}
	cout << endl;
}

void Try(int i)
{
	int n = s.size();
	for(int j=0; j<n; j++)
	{
		if(!vs[res[j]])
		{
			a[i] = res[j];
			vs[res[j]] = 1;
			if(i == n-1) solve();
			else Try(i+1);
			
			vs[res[j]] = 0;
		}
	}
}

signed main()
{
	faster();
	t()
	{
		res.clear();
		cin >> s;
		for(auto x : s) res.pb(x);
		sort(res.begin(), res.end());
		Try(0);
	}
	return 0;
}

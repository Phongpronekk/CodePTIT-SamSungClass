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
int a[100005], vs[100005] = {};

void solve()
{
	for(int i=0; i<n; i++) cout << a[i];
	cout << endl;
}

void Try(int i)
{
	int n = s.size();
	for(int j=0; j<n; j++)
	{
		if(!vs[s[j]])
		{
			a[i] = s[j];
			vs[s[j]] = 1;
			if(i == n-1) solve();
			else Try(i+1);
			
			vs[s[j]] = 0;
		}
	}
}

signed main()
{
	faster();
	t()
	{
		cin >> s;
		Try(0);
	}
	return 0;
}

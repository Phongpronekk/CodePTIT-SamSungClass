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
int a[100005], vs[100005] = {};

void solve()
{
	int dis = 0;
	for(int i=1; i<n; i++) dis += (a[i] - a[i+1]);
	if(dis <= 0) return;
	
	for(int i=1; i<=n; i++) cout << a[i] << " ";
	cout << endl;
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
	Try(1);
	return 0;
}

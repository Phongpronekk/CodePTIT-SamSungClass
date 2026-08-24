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

int n, a[100005], vs[100005] = {};
int idx = 0;

int fact(int n)
{
	if(n == 0 || n == 1) return 1;
	return fact(n-1) * n;
}

void solve(int idx)
{
	cout << idx << ": ";
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
			if(i == n)
			{
				idx++;
				solve(idx);
			}
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

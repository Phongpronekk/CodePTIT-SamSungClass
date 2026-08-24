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

int c(int n, int k)
{
	if(k == 0 || k == n) return 1;
	if(k == 1) return n;
	return c(n-1, k-1) + c(n-1, k);
}

signed main()
{
	faster();
	int n; cin >> n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << c(i, j) << " ";
		}
		cout << endl;
	}
	return 0;
}

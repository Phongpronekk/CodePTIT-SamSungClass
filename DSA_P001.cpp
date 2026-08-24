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
int a[100005];

void Try(int i, int pre)
{
	if(i > k)
	{
		for(int j=1; j<=k; j++) cout << a[j] << " ";
		cout << endl;
		return;
	}
	for(int j=n-k+i; j>=pre+1; j--)
	{
		a[i] = j;
		Try(i+1, j);
	}
}

signed main()
{
	faster();
	t()
	{
		cin >> n >> k;
		Try(1, 0);
	}
	return 0;
}

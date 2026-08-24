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
int len[45], cnt[45];

int solve(int n, int k)
{
	if(n == 0) return min(1LL, k);
	if(n == 1) return 0;
	
	if(k <= len[n-1]) return solve(n-1, k);
	return cnt[n-1] + solve(n-2, k - len[n-1]);
}

void setup()
{
	len[0] = 1, len[1] = 1;
	cnt[0] = 1, cnt[1] = 0;
	
	for(int i=2; i<=45; i++)
	{
		len[i] = len[i-1] + len[i-2];
		cnt[i] = cnt[i-1] + cnt[i-2];
	}
}

signed main()
{
	faster();
	setup();
	t()
	{
		cin >> n >> k;
		cout << solve(n, k) << endl;
	}
	return 0;
}

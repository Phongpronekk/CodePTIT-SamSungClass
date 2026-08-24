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

int lpf[1000005] = {0};
int prefix[1000005] = {0};

void sieve2()
{
	for(int i=2; i<1000000; i++)
	{
		if(lpf[i] == 0)
		{
			for(int j=i; j<1000000; j+=i) lpf[j] = i;
		}
	}
	
	for(int i=1; i<1000000; i++)
	{
		prefix[i] = prefix[i-1] + lpf[i];
	}
}

signed main()
{
	faster();
	sieve2();
	t()
	{
		int l, r; cin >> l >> r;
		cout << prefix[r] - prefix[l-1] << endl;
	}
	return 0;
}

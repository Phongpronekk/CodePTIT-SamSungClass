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
int a[100005];

bool palin(string s)
{
	string tmp = s;
	reverse(tmp.begin(), tmp.end());
	return (tmp == s);
}

void Try(int i, int len)
{
	if(i > len)
	{
		string ans = "";
		for(int j=1; j<=len; j++) ans += char(a[j] + '0');
		if(palin(ans)) cout << ans << " ";
		return;
	}
	
	for(int j=0; j<=1; j++)
	{
		a[i] = j;
		Try(i+1, len);
	}
}

signed main()
{
	faster();
	t()
	{
		cin >> n;
		for(int len=2; len<=n; len+=2) Try(1, len);
		cout << endl;
	}
	return 0;
}

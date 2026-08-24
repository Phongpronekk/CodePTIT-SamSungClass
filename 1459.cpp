#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define bp pop_back
#define maxn 1000005
#define mp make_pair
#define fi first
#define se second

using namespace std;

string s;
int ans;

void even(int i)
{
	int len = 0;
	int l = i, r = i+1;
	while(l>=0 && r<s.length())
	{
		if(s[l] != s[r]) break;
		len += 2;
		l--; r++;
	}
	ans = max(ans, len);
}

void odd(int i)
{
	int len = 1;
	int l = i-1, r = i+1;
	while(l>=0 && r<s.length())
	{
		if(s[l] != s[r]) break;
		len += 2;
		l--; r++;
	}
	ans = max(ans, len);
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		ans = 0;
		for(int i=0; i<s.length(); i++)
		{
			even(i);
			odd(i);
		}
		cout << ans << endl;
	}
	return 0;
}

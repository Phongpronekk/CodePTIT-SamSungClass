#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"
#define pb push_back
#define bp pop_back
#define maxn 1000005
#define mp make_pair
#define fi first
#define se second

using namespace std;

int main()
{
	faster();
	int s1, s2, f1, f2; cin >> s1 >> s2 >> f1 >> f2;
	int steps = max(abs(s1-f1), abs(s2-f2));
	cout << steps << endl;
	return 0;
}

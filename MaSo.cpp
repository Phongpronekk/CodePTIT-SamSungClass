#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> numv;
vector<char> digv;
bool used[26];

void solve() {
    for (int i = 0; i < n; ++i) cout << digv[i];
    for (int i = 0; i < n; ++i) cout << numv[i];
    cout << '\n';
}

void GenNum(int i) {
    for (int j = 1; j <= n; ++j) {
        numv[i] = j;
        if (i == n - 1) solve();
        else GenNum(i + 1);
    }
}

void Try1(int i) { // sinh hoán v? ch?
    for (int k = 0; k < n; ++k) {
        if (!used[k]) {
            used[k] = true;
            digv[i] = char('A' + k);
            if (i == n - 1) {
                GenNum(0);           // ð? ch? -> sinh d?y s? có l?p
            } else {
                Try1(i + 1);
            }
            used[k] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!(cin >> n)) return 0;
    numv.assign(n, 0);
    digv.assign(n, 0);
    memset(used, 0, sizeof(used));

    Try1(0);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+9;

int N, M, K;
vector<int> a, b;
vector<vector<int>> combB;

// Sinh t?t c? t? h?p ch?n K ph?n t? c?a team B, s?p x?p gi?m d?n
void genCombB() {
    vector<bool> select(M, false);
    fill(select.end()-K, select.end(), true);
    do {
        vector<int> temp;
        for(int i=0; i<M; ++i)
            if(select[i]) temp.push_back(b[i]);
        sort(temp.rbegin(), temp.rend());
        combB.push_back(temp);
    } while(next_permutation(select.begin(), select.end()));
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M >> K;
    a.resize(N); b.resize(M);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    genCombB();

    // S?p x?p combB ð? binary search
    sort(combB.begin(), combB.end());

    long long res = 0;

    // Sinh t? h?p c?a team A, duy?t t?ng cái và binary search
    vector<bool> select(N, false);
    fill(select.end()-K, select.end(), true);
    do {
        vector<int> tempA;
        for(int i=0; i<N; ++i)
            if(select[i]) tempA.push_back(a[i]);
        sort(tempA.rbegin(), tempA.rend());

        // lower_bound ð? t?m s? t? h?p B nh? hõn tempA
        auto it = lower_bound(combB.begin(), combB.end(), tempA);
        res = (res + (it - combB.begin())) % MOD;

    } while(next_permutation(select.begin(), select.end()));

    cout << res << '\n';
    return 0;
}


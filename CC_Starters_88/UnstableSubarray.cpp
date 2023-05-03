#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll c(ll n) {
    ll p = n * (n - 1) / 2;
    return p;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        unordered_map<ll, ll> f;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            f[x]++;
        }

        ll tp = c(n);
        for (auto& [x, freq] : f) {
            ll pw = c(freq);
            tp -= pw;
        }

        cout << tp << endl;
    }
    return 0;
}

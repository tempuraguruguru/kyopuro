#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;
    vector<ll> X(N), P(N);
    for(ll i = 0; i < N; i++) cin >> X[i];
    for(ll i = 0; i < N; i++) cin >> P[i];
    ll Q;
    cin >> Q;
    vector<ll> L(Q), R(Q);
    for(ll i = 0; i < Q; i++) cin >> L[i] >> R[i];

    vector<ll> cum_sum(N + 1, 0);
    for (ll i = 0; i < N; i++){
        cum_sum[i + 1] = cum_sum[i] + P[i];
    }

    ll sum, l, r;
    for(ll i = 0; i < Q; i++){
        sum = 0;
        l = lower_bound(X.begin(), X.end(), L[i]) - X.begin();
        r = upper_bound(X.begin(), X.end(), R[i]) - X.begin() - 1;
        if(l <= r && r >= 0 && l < N) {
            sum = cum_sum[r + 1] - cum_sum[l];
            cout << sum << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
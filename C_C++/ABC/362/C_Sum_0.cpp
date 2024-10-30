#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ll N; cin >> N;
    vector<ll> L(N), R(N);
    for(int i = 0; i < N; i++) cin >> L[i] >> R[i];

    ll sum = 0;
    ll sumr = 0;
    vector<ll> res(N);
    for(int i = 0; i < N; i++){
        res[i] = L[i];
        sum += L[i];
        sumr += R[i];
    }
    if(sumr < 0 || sum > 0){
        cout << "No" << endl;
        return 0;
    }

    for(int i = 0; i < N; i++){
        ll d = min(R[i] - L[i], -sum);
        sum += d;
        res[i] += d;
    }
    cout << "Yes" << endl;
    for(int i = 0; i < N; i++){
        cout << res[i] << " ";
    }
    cout << endl;
}
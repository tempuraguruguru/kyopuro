#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

ll factorial(ll n){
    if(n != 0){
        return n * factorial(n-1);
    }
    return 1;
}

int main(){
    ll N, K;
    cin >> N >> K;
    vector<ll> V;
    ll S = factorial(N*K);
    ll c = 1;
    for(ll i = 0; i < N; i++){
        c *= factorial(K);
    }
    S = S / c;
    // cout << S << endl;
    for(ll i = 1; i <= N; i++){
        for(ll j = 0; j < K; j++){
            V.push_back(i);
        }
    }
    // for(int i = 0; i < V.size(); i++){
    //     cout << V[i] << endl;
    // }
    ll pattern = floor((S+1)/2);
    ll count = 1;
    vector<ll> res;
    do{
        if(count == pattern){
            res = V;
            break;
        }
        count++;
    }while(next_permutation(V.begin(), V.end()));

    for(ll i = 0; i < (ll)res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
}
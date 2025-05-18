#include <iostream>
#include <vector>
#include <limits>
using namespace std;
using ll = long long;

int main(){
    ll N, K; cin >> N >> K;
    vector<ll> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    ll current = 1;
    for(ll i = 0; i < N; i++){
        if(to_string(A[i]).length() > K){
            current = 1;
        }else{
            if(current > numeric_limits<ll>::max() / A[i]){
                current = 1;
            }else{
                current *= A[i];
                if(to_string(current).length() > K){
                    current = 1;
                }
            }
        }
    }
    cout << current << endl;
}
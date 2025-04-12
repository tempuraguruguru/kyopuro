#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    int N, K; cin >> N >> K;
    vector<ll> A(N+1, 0);
    vector<ll> total(N+2, 0);
    ll d = 1e9;
    for(int i = 0; i < N+1; i++){
        if(i < K){
            A[i] = 1;
        }else{
            A[i] = (total[i] - total[i-K] + d) % d;
        }
        total[i+1] = (total[i] + A[i]) % d;
    }
    cout << A[N] % d << endl;
}

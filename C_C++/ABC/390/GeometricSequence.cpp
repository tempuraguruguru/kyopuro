#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    int N; cin >> N;
    vector<ll> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    // a_k / a_k-1 = r
    // a_k+1 / a_k = r
    // a_k+1 * a_k-1 = a_k * a_k
    for(int i = 1; i < N-1; i++){
        if(A[i] * A[i] != A[i-1] * A[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
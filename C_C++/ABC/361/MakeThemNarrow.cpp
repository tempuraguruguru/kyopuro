#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());
    int res = 2e9;

    for(int i = 0; i <= K; i++){
        res = min(res, A[i+N-K-1] - A[i]);
    }
    cout << res << endl;
}
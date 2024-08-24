#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    vector<int> B(K);
    for(int i = 0; i < K; i++){
        B[K-i-1] = A.back();
        A.pop_back();
    }

    for(int i =0 ;i < K; i++){
        cout << B[i] << " ";
    }
    for(int i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }
    cout << endl;
}
#include <iostream>
#include <vector>
using namespace std;

bool AP(vector<int> A, int l, int r){
    int d = A[l+1] - A[l];
    for(int i = l+1; i < r; i++){
        if(i+1 <= r && A[i+1] - A[i] != d){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int res = N + (N-1);
    for(int l = 0; l < N; l++){
        for(int r = l+2; r < N; r++)
    }
}
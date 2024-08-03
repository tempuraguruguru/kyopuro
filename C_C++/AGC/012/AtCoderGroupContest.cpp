#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(3*N);
    for(int i = 0; i < 3*N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    long int res = 0;
    for(int i = 0; i < N; i++){
        res += A[(3*N-1)-2*i-1];
    }
    cout << res << endl;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int q;
    int A[100000];
    int B[100000];
    int K[100000];

    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    for(int i = 0; i < q; i++){
        cin >> B[i] >> K[i];
    }

    const int inf = 1e9;
    for(int i = 0; i < q; i++){
        int set = B[i];
    }
}
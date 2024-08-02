#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    int res = 0;
    for(int i = 0; i < N; i++){
        if(i == N-1 && X != A[i]){
            break;
        }
        if(X >= A[i]){
            X -= A[i];
            res++;
        }
    }
    cout << res << endl;
}
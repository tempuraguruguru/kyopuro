#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int max = 0;
    int max2 = 0;
    int res = 0;
    for(int i = 0; i < N; i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    for(int i = 0; i < N; i++){
        if(A[i] < max && A[i] > max2){
            max2 = A[i];
            res = i;
        }
    }
    cout << res+1 << endl;
}
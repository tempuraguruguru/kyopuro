#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N);
    for(int i = 0; i < N; i++){
        A[i].resize(i+1);
        for(int j = 0; j < (i+1); j++){
            cin >> A[i][j];
        }
    }

    int current = A[0][0] - 1;
    for(int i = 1; i < N; i++){
        // cout << "current = " << current << ", i = " << i << endl;
        if(current >= i){
            current = A[current][i] - 1;
        }else{
            current = A[i][current] - 1;
        }
    }
    cout << current+1 << endl;
}
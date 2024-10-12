#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < N/2; i++){
        for(int x = i; x < (N-1)+1-i; x++){
            for(int y = i; y < (N-1)+1-i; y++){
                A[y][(N-1)+1-x] = A[x][y];
            }
        }
    }
    cout << endl;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << A[i][j];
        }
        cout << endl;
    }
}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            cin >> X[i][j];
        }
    }

    int total;
    int res = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            total = 0;
            for(int k = 0; k < D; k++){
                total += pow((X[i][k] - X[j][k]), 2);
            }
            if(pow(floor(sqrt(total)), 2) == total){
                res++;
            }
        }
    }
    cout << res << endl;
}
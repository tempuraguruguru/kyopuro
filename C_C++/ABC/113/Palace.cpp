#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    double A, T;
    cin >> N >> T >> A;
    vector<double> H(N);
    for(int i = 0; i < N; i++) cin >> H[i];

    double min = 1e5;
    int res = 0;
    for(int i = 0; i < N; i++){
        if(abs(A - (T - H[i]*0.006)) < min){
            min = abs(A - (T - H[i]*0.006));
            res = i+1;
        }
    }
    cout << res << endl;
}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N; cin >> N;
    double T, A; cin >> T >> A;
    vector<double> H(N);
    for(int i = 0; i < N; i++) cin >> H[i];

    int ResPosition;
    double difference = 1e09;
    for(int i = 0; i < N; i++){
        if(abs((T - H[i] * 0.006) - A) < difference){
            difference = abs((T - H[i] * 0.006) - A);
            ResPosition = i+1;
        }
    }
    cout << ResPosition << endl;
}
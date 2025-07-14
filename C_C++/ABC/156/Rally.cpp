#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> X(N);
    for(int i = 0; i < N; i++) cin >> X[i];

    int ResTotal = 1e09;
    for(int P = 1; P <= 100; P++){
        int total = 0;
        for(int i = 0; i < N; i++){
            total += pow((X[i] - P), 2);
        }
        if(ResTotal > total){
            ResTotal = total;
        }
    }
    cout << ResTotal << endl;
}
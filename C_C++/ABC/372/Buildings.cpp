#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> H(N);
    for(int i = 0; i < N; i++) cin >> H[i];

    vector<int> res(N);
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            int m = max(H[i], H[j]);
        }
    }
}
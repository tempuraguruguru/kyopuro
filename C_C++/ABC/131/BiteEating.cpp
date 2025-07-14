#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N, L; cin >> N >> L;
    vector<int> AppleList(N);
    for(int i = 1; i <= N; i++){
        AppleList[i-1] = L + i - 1;
    }
    int Ntotal = 0;
    for(int i = 0; i < N; i++) Ntotal += AppleList[i];

    int Restotal;
    int difference = 1e09;
    for(int i = 0; i < N; i++){
        int total = 0;
        for(int j = 0; j < N; j++){
            if(i == j) continue;
            total += AppleList[j];
        }
        if(abs(Ntotal - total) <= difference){
            difference = abs(Ntotal - total);
            Restotal = total;
        }
    }
    cout << Restotal << endl;
}
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int Sum(vector<int> L){
    int total = 0;
    for(int i = 0; i < L.size(); i++){
        total += L[i];
    }
    return total;
}

int main(){
    int N; cin >> N;
    vector<int> W(N);
    for(int i = 0; i < N; i++) cin >> W[i];

    int difference = 1e8;
    for(int t = 0; t < N-1; t++){
        vector<int> left(W.begin(), W.begin()+t+1);
        vector<int> right(W.begin()+t+1, W.end());
        // cout << "left: ";
        // for(auto ele:left){
        //     cout << ele << " ";
        // }
        // cout << endl;
        // cout << "right: ";
        // for(auto ele:right){
        //     cout << ele << " ";
        // }
        // cout << endl;

        if(difference > abs(Sum(left) - Sum(right))){
            difference = abs(Sum(left) - Sum(right));
        }
    }
    cout << difference << endl;
}
#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

int main(){
    vector<int> A(5);
    for(int i = 0; i < 5; i++) cin >> A[i];

    vector<int> swaps;
    vector<int> ref = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        if(A[i] != ref[i]) swaps.push_back(i);
    }
    if(swaps.size() == 2 && abs(swaps[0] - swaps[1]) == 1){
        swap(A[swaps[0]], A[swaps[1]]);
        if(A == ref){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
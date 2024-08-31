#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int get_first_index(vector<string> L, string s){
    for(int i = 0; i < (int)L.size(); i++){
        if(L[i] == s){
            return i;
        }
    }
    return 0;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> A[i] >> S[i];

    int left_i = get_first_index(S, "L");
    int right_i = get_first_index(S, "R");
    int left = A[left_i];
    int right = A[right_i];
    int tired = 0;
    // cout << "left = " << left_i << ", right = " << right_i << endl;
    for(int i = 0; i < N; i++){
        if(S[i] == "L"){
            tired += abs(A[i] - left);
            left = A[i];
        }else{
            tired += abs(A[i] - right);
            right = A[i];
        }
    }
    cout << tired << endl;
}
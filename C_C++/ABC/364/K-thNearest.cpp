#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int f(vector<int> L, int x){
    int res = 0;
    for(int i = 0; i < L.size(); i++){
        if(L[i] <= x){
            res++;
        }
    }
    return res;
}

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    vector<vector<int>> B(Q, vector<int>(2));
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for(int j = 0; j < Q; j++){
        for(int k = 0; k < 2; k++){
            cin >> B[j][k];
        }
    }

    for(int l = 0; l < Q; l++){
        vector<int> L;
        for(int m = 0; m < A.size(); m++){
            L.push_back(abs(A[m] - B[l][0]));
        }
        int x = 0;
        while(f(L, x) < B[l][1]){
            x++;
        }
        cout << x << endl;
    }
}
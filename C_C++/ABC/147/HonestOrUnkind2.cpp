#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> IntPower(int bit, int N){
    vector<int> S;
    for(int i = 0; i < N; i++){
        if(bit & (1 << i)) S.push_back(i);
    }
    return S;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<vector<int>> X, Y;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        vector<int> x, y;
        for(int j = 0; j < A[i]; j++){
            int px, py; cin >> px >> py;
            x.push_back(px-1);
            y.push_back(py);
        }
        X.push_back(x);
        Y.push_back(y);
    }

    int max_honest = 0;
    for(int bit = 0; bit < (1 << N); bit++){
        vector<int> honests = IntPower(bit, N);
        int honest = 0;
        bool flag = true;
        for(int i : honests){
            for(int j = 0; j < A[i]; j++){
                if(find(honests.begin(), honests.end(), X[i][j]) != honests.end()){
                    if(Y[i][j] == 0) flag = false;
                }else{
                    if(Y[i][j] == 1) flag = false;
                }
            }
        }
        if(flag){
            honest = honests.size();
        }
        if(honest > max_honest) max_honest = honest;
    }
    cout << max_honest << endl;
}
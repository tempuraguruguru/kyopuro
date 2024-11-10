#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    string S; cin >> S;
    int res = 0;

    bool flag;
    for(int i = 0; i < S.size(); i++){
        flag = true;
        for(int j = 0; j < K; j++){
            if(S[i+j] != 'O'){
                flag = false;
            }
        }
        if(flag){
            res++;
            for(int k = 0; k < K; k++) S[i+k] = 'X';
        }
    }
    cout << res << endl;
}
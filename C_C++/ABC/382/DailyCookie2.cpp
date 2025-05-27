#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, D; cin >> N >> D;
    string S; cin >> S;

    int res = 0;
    for(int i = 0; i < D; i++){
        for(int j = S.length() - 1; j >= 0; j--){
            if(S[j] == '@'){
                S[j] = '.';
                break;
            }
        }
    }
    cout << S << endl;
}
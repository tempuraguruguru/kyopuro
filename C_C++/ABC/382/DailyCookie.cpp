#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, D; cin >> N >> D;
    string S; cin >> S;

    int res = 0;
    for(int i = 0; i < D; i++){
        for(int j = 0; j < S.length(); j++){
            if(S[j] == '@'){
                S[j] = '.';
                break;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < S.length(); i++){
        if(S[i] == '.') count++;
    }
    cout << count << endl;
}
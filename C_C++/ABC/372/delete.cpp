#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, T;
    cin >> S;
    T = "";
    for(int i = 0; i < S.size(); i++){
        if(S[i] != '.'){
            T += S[i];
        }
    }
    cout << T << endl;
}
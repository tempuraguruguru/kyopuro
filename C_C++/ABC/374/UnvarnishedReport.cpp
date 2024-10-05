#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    int ms = 0;
    if(S.size() >= T.size()){
        ms = S.size();
    }else{
        ms = T.size();
    }
    for(int i = 0; i < ms; i++){
        if(S[i] != T[i]){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}
#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    int i, j;
    for(i = 0; i < (int)S.length(); i++){
        if(S[i] == 'A'){
            break;
        }
    }
    for(j = (int)S.length()-1; j >= 0; j--){
        if(S[j] == 'Z'){
            break;
        }
    }
    cout << j - i + 1 << endl;
}
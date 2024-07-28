#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    for(int i = 0; i < int(S.size()); i += 2){
        cout << S[i];
    }
    cout << endl;
}
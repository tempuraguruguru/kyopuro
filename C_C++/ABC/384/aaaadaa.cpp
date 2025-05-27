#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; cin >> N;
    char c1, c2; cin >> c1 >> c2;
    string S; cin >> S;

    for(int i = 0; i < S.length(); i++){
        if(S[i] != c1) S[i] = c2;
    }
    cout << S << endl;
}
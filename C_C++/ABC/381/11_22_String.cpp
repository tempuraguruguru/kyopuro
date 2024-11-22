#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; cin >> N;
    string S; cin >> S;
    if(S.size() % 2 == 0){
        cout << "No" << endl;
        return 0;
    }

    int srash = S.size() - (S.size() / 2) - 1;
    if(S[srash] != '/'){
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < srash; i++){
        if(S[i] != '1'){
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i = srash + 1; i < int(S.size()); i++){
        if(S[i] != '2'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
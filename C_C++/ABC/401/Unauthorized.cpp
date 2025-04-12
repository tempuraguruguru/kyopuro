#include <iostream>
#include <string>
using namespace std;

int main(){
    int N; cin >> N;
    string S;
    bool login = false;
    int error = 0;
    for(int i = 0; i < N; i++){
        cin >> S;
        if(S == "login"){
            if(!login){
                login = true;
            }
        }
        if(S == "logout"){
            if(login){
                login = false;
            }
        }
        if(S == "private"){
            if(!login){
                error++;
            }
        }
    }
    cout << error << endl;
}
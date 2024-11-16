#include <iostream>
#include <string>
using namespace std;

int main(){
    string S; cin >> S;
    string res = "";
    int count = 0;
    for(int i = 0; i < S.size(); i++){
        if(S[i] == '|'){
            if(count != 0){
                cout << count << " ";
                count = 0;
            }else{
                count = 0;
            }
        }
        if(S[i] == '-') count++;
    }
    cout << endl;
}
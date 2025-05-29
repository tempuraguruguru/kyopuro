#include <iostream>
#include <string>
using namespace std;

int main(){
    string S; cin >> S;
    int button_count = 0;
    bool previous_zero = false;
    for(int i = 0; i < S.length(); i++){
        if(S[i] == '0'){
            if(previous_zero){
                button_count++;
                previous_zero = false;
            }else{
                previous_zero = true;
            }
        }else{
            if(previous_zero){
                button_count += 2;
                previous_zero = false;
            }else{
                button_count++;
            }
        }
    }
    if(previous_zero) button_count++;
    cout << button_count << endl;
}
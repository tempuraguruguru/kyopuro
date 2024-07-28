#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    if(S.substr(0, 4) == "2017"){
        S.replace(0, 4, "2018");
    }
    cout << S << endl;
}
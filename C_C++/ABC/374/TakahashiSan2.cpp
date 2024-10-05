#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;

    string check = S.substr(S.size()-3, 3);
    if(check == "san"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
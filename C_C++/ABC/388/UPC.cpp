#include <iostream>
#include <string>
using namespace std;

int main(){
    string S; cin >> S;
    string s(1, S[0]);
    cout << s + "UPC" << endl;
}
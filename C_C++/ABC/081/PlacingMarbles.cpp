#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    int count = 0;
    if(S[0] == '1') count++;
    if(S[1] == '1') count++;
    if(S[2] == '1') count++;
    cout << count << endl;
}
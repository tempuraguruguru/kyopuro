#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    vector<int> L(26);
    int size = S.size();
    for(int i = 0; i < size; i++){
        L[int(S[i])-97]++;
    }
    for(int i = 0; i < L.size(); i++){
        if(L[i] == 0){
            char c = i + 97;
            cout << c << endl;
            exit(0);
        }
    }
    cout << "None" << endl;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S; cin >> S;
    if(S.size() % 2 == 1){
        cout << "No" << endl;
        return 0;
    }
    vector<char> mozi;
    for(int i = 0; i < int(S.size() / 2); i++){
        auto it = find(mozi.begin(), mozi.end(), S[2*i]);
        if(it != mozi.end()){
            cout << "No" << endl;
            return 0;
        }else{
            mozi.push_back(S[2*i]);
        }
        if(S[2*i] != S[2*i + 1]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
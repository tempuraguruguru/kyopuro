#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int count = 0;
    for(size_t i = 0; i < S.size()-2; i++){
        char target = S[i];
        for(size_t j = i+2; j < S.size(); j++){
            if(S[j] == target) count += j-i-1;
        }
    }
    cout << count << endl;
}
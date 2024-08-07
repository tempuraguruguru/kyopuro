#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    string ref[4] = {"eraser", "erase", "dreamer", "dream"};
    for(int i = 0; i < 4; i++){
        reverse(ref[i].begin(), ref[i].end());
    }

    while(S != ""){
        if(S.compare(0, ref[0].size(), ref[0]) == 0){
            S = S.substr(ref[0].size());
        }else if(S.compare(0, ref[1].size(), ref[1]) == 0){
            S = S.substr(ref[1].size());
        }else if(S.compare(0, ref[2].size(), ref[2]) == 0){
            S = S.substr(ref[2].size());
        }else if(S.compare(0, ref[3].size(), ref[3]) == 0){
            S = S.substr(ref[3].size());
        }else{
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
}
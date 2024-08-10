#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];

    int max_length = 0;
    for(int i = 0; i < N; i++){
        if(max_length < (int)S[i].length()){
            max_length = S[i].length();
        }
    }
    vector<string> T(max_length);
    for(int i = 0; i < max_length; i++){
        for(int j = N-1; j >= 0; j--){
            if(S[j][i] && i < S[j].length()){
                T[i] += S[j][i];
            }else{
                T[i] += "*";
            }
        }
    }
    cout << endl;
    for(int i = 0; i < max_length; i++){
        int length = T[i].length()-1;
        int slice = length;
        while(true){
            if(T[i][length] != '*'){
                slice = length;
                break;
            }
            length--;
        }
        cout << T[i].substr(0, slice+1) << endl;
    }
}
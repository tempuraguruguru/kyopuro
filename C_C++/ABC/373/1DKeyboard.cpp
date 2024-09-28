#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string S;
    cin >> S;

    int cost = 0;
    int current = 0;
    for(int i = 0; i < 26; i++){
        if(S[i] == 'A'){
            current = i;
        }
    }
    int next = 0;
    string keyboard = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 1; i < 26; i++){
        for(int j = 0; j < 26; j++){
            if(S[j] == keyboard[i]){
                cost += abs(j - current);
                current = j;
                break;
            }
        }
    }
    cout << cost << endl;
}
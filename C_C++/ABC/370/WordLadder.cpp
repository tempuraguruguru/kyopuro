#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int lb(string s, string t){
    int i;
    for(i = 0; i < s.size(); i++){
        if(s[i] > t[i]){
            return i;
        }
    }
    return -1;
}

int fd(string s, string t){
    int i;
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    for(i = 0; i < s.size(); i++){
        if(s[i] != t[i]){
            return (s.size() - i - 1);
        }
    }
    return -1;
}

int main(){
    string S, T;
    cin >> S;
    cin >> T;
    vector<string> X;

    int count = 0;
    bool flag;
    while(S != T){
        int l = lb(S, T);
        if(l == -1){
            int f = fd(S, T);
            S[f] = T[f];
            count++;
            X.push_back(S);
        }else{
            S[l] = T[l];
            count++;
            X.push_back(S);
        }
    }

    cout << count << endl;
    for(int i = 0; i < X.size(); i++){
        cout << X[i] << endl;
    }
}
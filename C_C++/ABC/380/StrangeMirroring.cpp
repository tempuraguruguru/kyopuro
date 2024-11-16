#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverse(string S){
    std::string T;
    T.reserve(S.size());
    for(char s : S){
        if(isupper(s)){
            T += tolower(s);
        }else if(islower(s)){
            T += toupper(s);
        }else{
            T += s;
        }
    }
    return T;
}

int main(){
    string S; cin >> S;
    int Q; cin >> Q;
    vector<int> K(Q);
    for(int i = 0; i < Q; i++){
        int k; cin >> k;
        K[i] = k-1;
    }

    int N = S.size();
    for(int i = 0; i < Q; i++){
        if((K[i] / 2) % 2 == 0){
            cout << S[K[i] % N] << " ";
        }else{
            S = reverse(S);
            cout << S[K[i] % N] << " ";
        }
    }
    cout << endl;
}

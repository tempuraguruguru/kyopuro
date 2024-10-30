#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    string S; cin >> S;
    sort(S.begin(), S.end());

    int res = 0;
    do{
        bool flag = true;
        for(int i = 0; i <= N-K; i++){
            string s1 = S.substr(i, K);
            string s2 = s1;
            reverse(s2.begin(), s2.end());
            if(s1 == s2){
                flag = false;
                break;
            }
        }
        if(flag){
            res++;
        }
    }while(next_permutation(S.begin(), S.end()));
    cout << res << endl;
}
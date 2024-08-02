#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int res = 0;
    string S, T;
    for(int i = A; i <= B; i++){
        S = to_string(i);
        T = S;
        reverse(T.begin(), T.end());
        if(S == T){
            res++;
        }
    }
    cout << res << endl;
}
#include <iostream>
using namespace std;

int main(){
    int A, B, C; cin >> A >> B >> C;
    if(A + B == C){
        cout << "Yes" << endl;
        return 0;
    }else if(B + C == A){
        cout << "Yes" << endl;
        return 0;
    }else if(C + A == B){
        cout << "Yes" << endl;
        return 0;
    }else if(A == B && B == C){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
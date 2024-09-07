#include <iostream>
using namespace std;

int main(){
    int L, R;
    cin >> L >> R;

    if(L == 1 && R != 1){
        cout << "Yes" << endl;
    }else if(L != 1 && R == 1){
        cout << "No" << endl;
    }else{
        cout << "Invalid" << endl;
    }
}
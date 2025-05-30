#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ll X; cin >> X;
    ll total = 1;

    // for(int i = 2; i <= 3e18; i++){
    //     total *= i;
    //     if(total <= 3e18){
    //         cout << i << endl;
    //         // return 0;
    //     }else{
    //         return 0;
    //     }
    // }

    for(int i = 2; i <= 22; i++){
        total *= i;
        if(total == X){
            cout << i << endl;
            return 0;
        }
    }
}
#include <iostream>
using namespace std;

int main(){
    int Y;
    cin >> Y;
    int res;
    if(Y % 4 != 0){
        res = 365;
    }else{
        if(Y % 100 != 0){
            res = 366;
        }else{
            if(Y % 400 != 0){
                res = 365;
            }else{
                res = 366;
            }
        }
    }
    cout << res << endl;
}
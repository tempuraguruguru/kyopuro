#include <iostream>
using namespace std;

// もうガン萎え

int main(){
    int dead_h, dead_m, sub_h, sub_m; cin >> dead_h >> dead_m >> sub_h >> sub_m;
    if(sub_h < dead_h){
        cout << "Yes" << endl;
    }else if(sub_h == dead_h){
        if(sub_m <= dead_m){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }
}
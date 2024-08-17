#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int time[24] = {0};
    int n = C;
    if(B > C){
        n = C+24;
    }
    for(int i = B; i < n; i++){
        if(i < 24){
            time[i] = -1;
        }else{
            time[i-24] = -1;
        }
    }
    if(time[A] == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    // for(int i = 0; i < 24; i++){
    //     cout << time[i];
    // }
}
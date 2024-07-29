#include <iostream>
using namespace std;

int main(){
    int N, total;
    cin >> N;
    bool flag = false;
    for(int i = 0; i < N/7 + 1; i++){
        for(int j = 0; j < N/4 + 1; j++){
            total = 7*i + 4*j;
            if(total == N){
                flag = !flag;
                break;
            }
        }
        if(flag){
            cout << "Yes" << endl;
            break;
        }
    }
    if(!flag){
        cout << "No" << endl;
    }
}
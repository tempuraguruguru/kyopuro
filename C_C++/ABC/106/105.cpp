#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int divisor = 0;
    for(int i = 1; i <= N; i += 2){
        int count = 2;
        for(int j = 2; j < i; j++){
            if(i % j == 0) count++;
        }
        if(count == 8) divisor++;
    }
    cout << divisor << endl;
}
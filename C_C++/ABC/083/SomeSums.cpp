#include <iostream>
using namespace std;

int DigitsSum(int N){
    int sum = 0;
    while(N > 0){
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int res = 0;
    for(int i = 1; i <= N; i++){
        if(A <= DigitsSum(i) && DigitsSum(i) <= B){
            res += i;
        }
    }
    cout << res << endl;
}
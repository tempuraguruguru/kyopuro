#include <iostream>
#include <limits>
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
    double inf = numeric_limits<double>::infinity();
    int N;
    cin >> N;

    int min = inf;
    int total = 0;
    int A, B;
    for(A = 1; A < N; A++){
        B = N - A;
        total = DigitsSum(A) + DigitsSum(B);
        if(total < min){
            min = total;
        }
    }
    cout << min << endl;
}
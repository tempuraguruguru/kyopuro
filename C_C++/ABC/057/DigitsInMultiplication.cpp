#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll Digits(ll N){
    ll sum = 0;
    while(N > 0){
        N /= 10;
        sum++;
    }
    return sum;
}

ll F(ll A, ll B){
    ll a = Digits(A);
    ll b = Digits(B);
    if(a >= b){
        return a;
    }else{
        return b;
    }
}

int main(){
    ll N;
    cin >> N;

    ll min = 1e10;
    ll A = 1;
    ll B;
    while(A <= sqrt(N)){
        if(N % A == 0){
            B = N / A;
            if(min > F(A, B)){
                min = F(A, B);
            }
        }
        A++;
    }
    cout << min << endl;
}
#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int res = 0;

    while(N > 0){
        N /= K;
        res++;
    }
    cout << res << endl;
}
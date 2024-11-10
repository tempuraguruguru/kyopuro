#include <iostream>
#include <vector>
using namespace std;

int mysum(int n){
    int sum = 0;
    while(n > 0){
        sum += n;
        n--;
    }
    return sum;
}

int main(){
    int N, M; cin >> N >> M;
    vector<int> X(M), A(M);
    for(int i = 0; i < M; i++){
        int x; cin >> x;
        X[i] = x - 1;
    }
    int sum = 0;
    for(int i = 0; i < M; i++){
        cin >> A[i];
        sum += A[i];
    }

    if(N > sum){
        cout << -1 << endl;
        return 0;
    }

    int res = 0;
    vector<int> ms(N);
    for(int i = 0; i < M; i++){
        ms[X[i]] = A[i];
    }
    int count = 0;
    int current = 0;
    for(int i = N-1; i >= 0; i--){
        if(ms[i] == 0){
            count++;
        }else{
            current += ms[i] - 1;
            if(current >= count){
                res += mysum(count);
                count = 0;
                current = 0;
            }else{
                //ここをどうにかしたい
                res += mysum(current);
                count -= current;
                current = 0;
            }
        }
    }
    if(count != 0){
        cout << -1 << endl;
        return 0;
    }
    cout << res << endl;
}
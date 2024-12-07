#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> T(N), V(N);
    for(int i = 0; i < N; i++) cin >> T[i] >> V[i];

    int res = 0;
    for(int i = 0; i < N; i++){
        if(res > 0){
            res -= T[i] - T[i-1];
            if(res < 0) res = 0;
            res += V[i];
        }else{
            res += V[i];
        }
    }
    cout << res << endl;
}
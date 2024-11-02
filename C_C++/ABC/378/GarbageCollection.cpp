#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, Q;
    cin >> N;
    vector<int> q(N), r(N);
    for(int i = 0; i < N; i++) cin >> q[i] >> r[i];
    cin >> Q;
    vector<int> t(Q), d(Q);
    for(int i = 0; i < Q; i++) cin >> t[i] >> d[i];

    for(int i = 0; i < Q; i++){
        if(d[i] % q[t[i]-1] == r[t[i]-1]){
            cout << d[i] << endl;
        }else{
            int m = d[i] % q[t[i]-1];
            if(m < r[t[i]-1]){
                cout << d[i] + (r[t[i]-1] - m) << endl;
            }else{
                cout << d[i] + q[t[i]-1] + (r[t[i]-1] - m) << endl;
            }
        }
    }
}
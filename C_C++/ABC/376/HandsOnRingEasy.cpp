#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<char> H(Q);
    vector<int> T(Q);
    for(int i = 0; i < Q; i++) cin >> H[i] >> T[i];

    int op = 0;
    int to, ng;
    int current_left = 1, current_right = 2;
    for(int i = 0; i < Q; i++){
        if(H[i] == 'L'){
            to = (T[i] - current_left + N) % N;
            ng = (current_right - current_left + N) % N;
            if(ng < to){
                op += N - to;
            }else{
                op += to;
            }
            current_left = T[i];
        }else{
            to = (T[i] - current_right + N) % N;
            ng = (current_left - current_right + N) % N;
            if(ng < to){
                op += N - to;
            }else{
                op += to;
            }
            current_right = T[i];
        }
    }
    cout << op << endl;
}
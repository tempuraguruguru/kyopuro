#include <iostream>
#include <vector>
using namespace std;

int main(){
    int H, W, Q;
    cin >> H >> W >> Q;
    vector<vector<int>> M(H, vector<int>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            M[i][j] = 1;
        }
    }
    vector<int> R(Q), C(Q);
    for(int i = 0; i < Q; i++) cin >> R[i] >> C[i];

    for(int i = 0; i < Q; i++){
        if(M[R[i]][C[i]] == 1){
            M[R[i]][C[i]] = 0;
        }else{
            for(int j = R[i]; j >= 0; j--){
                if(M[j][C[i]] == 1){
                    M[j][C[i]] = 0;
                    break;
                }
            }
            for(int j = R[i]; j < H; j++){
                if(M[j][C[i]] == 1){
                    M[j][C[i]] = 0;
                    break;
                }
            }
            for(int j = C[i]; j >= 0; j--){
                if(M[R[i]][j] == 1){
                    M[R[i]][j] = 0;
                    break;
                }
            }
            for(int j = C[i]; j < W; j++){
                if(M[R[i]][j] == 1){
                    M[R[i]][j] = 0;
                    break;
                }
            }
        }
    }
    int count = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(M[i][j] == 1){
                count++;
            }
        }
    }
    cout << count << endl;
}
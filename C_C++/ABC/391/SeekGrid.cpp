#include <iostream>
#include <vector>
using namespace std;
using Grid = vector<vector<char>>;

int main(){
    int N, M; cin >> N >> M;
    Grid S(N, vector<char>(N)), T(M, vector<char>(M));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> S[i][j];
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            cin >> T[i][j];
        }
    }
    for(int a = 0; a <= N - M; a++){
        for(int b = 0; b <= N - M; b++){
            bool flag = true;
            for(int i = 0; i < M; i++){
                for(int j = 0; j < M; j++){
                    if(S[a+i][b+j] != T[i][j]){
                        flag = false;
                        break;
                    }
                }
                if(!flag){
                    break;
                }
            }
            if(flag){
                cout << a+1 << " " << b+1 << endl;
                return 0;
            }
        }
    }
}
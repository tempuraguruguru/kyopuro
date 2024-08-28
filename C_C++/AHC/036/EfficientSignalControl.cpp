#include <iostream>
#include <vector>
using namespace std;

vector<int> Blue(vector<int> origin){
    for(int i = 0; i < origin.size(); i++){
        if(origin[i] == -1){
            origin[i] = 1;
        }
    }
    return origin;
}

vector<int> Red(vector<int> origin){
    for(int i = 0; i < origin.size(); i++){
        if(origin[i] == 1){
            origin[i] = -1;
        }
    }
    return origin;
}

int main(){
    int N, M, t, La, Lb;
    cin >> N >> M >> t >> La >> Lb;
    int u, v;
    vector<vector<int>> G(M, vector<int>(M));
    for(int i =0; i < M; i++){
        cin >> u >> v;
        G[u][v] = -1;
    }
    vector<int> T(t), X(N), Y(N);
    for(int i = 0; i < t; i++) cin >> T[i]; // 訪れる都市(頂点)の順番
    for(int i = 0; i < N; i++) cin >> X[i] >> Y[i];
    vector<int> A(La), B(Lb);
    for(int i = 0; i < Lb; i++) B[i] = -1; // 信号の状態：値vを含んでいれば、都市vは青信号
}
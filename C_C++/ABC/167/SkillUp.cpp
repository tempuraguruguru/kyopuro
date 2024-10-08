#include <iostream>
#include <vector>
using namespace std;

vector<int> Combination(int bit, int N){
    vector<int> S;
    for(int i = 0; i < N; i++){
        if(bit & (1 << i)) S.push_back(i);
    }
    return S;
}

bool check(vector<int> &S, int X){
    for(int i = 0; i < S.size(); i++){
        if(S[i] < X) return false;
    }
    return true;
}

int main(){
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));
    for(int i = 0; i < N; i++){
        cin >> C[i];
        for(int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }

    int min_money = 1e5 * 13;
    bool flag = false;
    for(int bit = 0; bit < (1 << N); bit++){
        int money = 0;
        vector<int> skill(M, 0);
        vector<int> books = Combination(bit, N);
        for(auto book : books){
            money += C[book];
            for(int i = 0; i < M; i++){
                skill[i] += A[book][i];
            }
        }
        if(check(skill, X)){
            flag = true;
            if(money < min_money) min_money = money;
        }
    }
    if(!flag){
        cout << -1 << endl;
        return 0;
    }
    cout << min_money << endl;
}
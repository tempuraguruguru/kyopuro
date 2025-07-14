#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, X, Y; cin >> N >> M >> X >> Y;
    vector<int> X_list(N), Y_list(M);
    for(int i = 0; i < N; i++) cin >> X_list[i];
    for(int i = 0; i < M; i++) cin >> Y_list[i];
    sort(X_list.begin(), X_list.end());
    sort(Y_list.begin(), Y_list.end());

    int X_max = X_list[X_list.size()-1];
    int Y_min = Y_list[0];
    for(int Z = X+1; Z <= Y; Z++){
        if(X_max < Z && Y_min >= Z){
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
}
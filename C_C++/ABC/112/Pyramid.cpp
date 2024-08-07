#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> P(N, vector<int>(3));
    for(int i = 0; i < N; i++) cin >> P[i][0] >> P[i][1] >> P[i][2];

    int H;
    bool flag;
    for(int cx = 0; cx <= 100; cx++){
        for(int cy = 0; cy <= 100; cy++){
            H = 1;
            flag = true;
            for(int i = 0; i < N; i++){
                if(P[i][2]){ // P[i][2] + abs(P[i][0] - cx) + abs(P[i][1] - cy) > 0 « これだとだめ
                    H = P[i][2] + abs(P[i][0] - cx) + abs(P[i][1] - cy);
                }
            }
            for(int i = 0; i < N; i++){
                if(max((H - abs(P[i][0] - cx) - abs(P[i][1] - cy)), 0) != P[i][2]){
                    flag = false;
                }
            }
            if(flag){
                cout << cx << " " << cy << " " << H << endl;
                exit(0);
            }
        }
    }
}
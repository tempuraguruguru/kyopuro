#include <iostream>
#include <vector>
using namespace std;

int main(){
    int W, H, N;
    cin >> W >> H >> N;
    vector<vector<int>> L(N, vector<int>(3));
    for(int i = 0; i < N; i++) cin >> L[i][0] >> L[i][1] >> L[i][2];

    int w1 = 0, w2 = 0, h1 = 0, h2 = 0;
    for(int i = 0; i < N; i++){
        if(L[i][2] == 1){
            w1 = L[i][0] > w1 ? L[i][0] : w1;
        }else if(L[i][2] == 2){
            w2 = W - L[i][0] > w2 ? W - L[i][0] : w2;
        }else if(L[i][2] == 3){
            h1 = L[i][1] > h1 ? L[i][1] : h1;
        }else{
            h2 = H - L[i][1] > h2 ? H - L[i][1] : h2;
        }
    }
    int area = 0;
    if(w1+w2 >= W || h1+h2 >= H){
        cout << 0 << endl;
        exit(0);
    }else{
        area = (h1 + h2)*W + (w1 + w2)*H - (w1*h1 + w1*h2 + w2*h1 + w2*h2);
        area = W*H - area;
        cout << area << endl;
    }
}
#include <iostream>
#include <vector>
using namespace std;

int Calc_Distance(int current, int T[i], int N){
    int distance_R = 0, distance_L = 0;
    if(current <= T[i]){
        distance_R = T[i] - current;
    }else{
        distance_R = (T[i] + N) - current;
    }
    if(current >= T[i]){
        distance_L = current - T[i];
    }else{
        distance_L = (current + N) - T[i];
    }
}

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<char> H(Q);
    vector<int> T(Q);
    for(int i = 0; i < Q; i++) cin >> H[i] >> T[i];

    int op = 0;
    int distance;
    int current_left = 1, current_right = 2;
    for(int i = 0; i < Q; i++){
        if(H[i] == 'L'){
            int distance_R = 0, distance_L = 0;
            if(current_left <= T[i]){
                distance_R = T[i] - current_left;
            }else{
                distance_R = (T[i] + N) - current_left;
            }
            if(current_left >= T[i]){
                distance_L = current_left - T[i];
            }else{
                distance_L = (current_left + N) - T[i];
            }
        }else{
            int distance_R = 0, distance_L = 0;
            if(current_right <= T[i]){
                distance_R = T[i] - current_right;
            }else{
                distance_R = (T[i] + N) - current_right;
            }
            if(current_right >= T[i]){
                distance_L = current_right - T[i];
            }else{
                distance_L = (current_right + N) - T[i];
            }
        }
    }
    cout << op << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int calculate_min_distance(int current, int target, int N){
    int forward_distance = (target - current + N) % N;
    int backward_distance = (current - target + N) % N;
    return min(forward_distance, backward_distance);
}

bool is_crossing(int left_hand, int right_hand, int target, int N){
    if(left_hand < right_hand){
        return (target >= right_hand || target <= left_hand);
    }else{
        return (target >= right_hand && target <= left_hand);
    }
}

int calculate_detour_distance(int hand, int target, int N){
    return calculate_min_distance(hand, target, N);
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
            if(is_crossing(current_left, current_right, T[i], N)){
                op += calculate_detour_distance(current_right, T[i], N);
            }else{
                op += calculate_min_distance(current_left, T[i], N);
                current_left = T[i];
            }
        }else if(H[i] == 'R'){
            if(is_crossing(current_left, current_right, T[i], N)){
                op += calculate_detour_distance(current_left, T[i], N);
            }else{
                op += calculate_min_distance(current_right, T[i], N);
                current_right = T[i];
            }
        }
    }
    cout << op << endl;
}
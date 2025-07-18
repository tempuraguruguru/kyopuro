#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N), B(N);
    for(int i = 0; i < N; i++) cin >> A[i] >> B[i];

    // 愚直な探索
    // int ResTotal = 1e09;
    // for(int i = 0; i < N; i++){
    //     int total;
    //     for(int j = 0; j < N; j++){
    //         if(i == j){
    //             total = A[i] + B[j];
    //         }else{
    //             total = A[i] >= B[j] ? A[i] : B[j];
    //         }
    //         if(ResTotal > total){
    //             ResTotal = total;
    //         }
    //     }
    // }
    // cout << ResTotal << endl;

    // 最小値を基本とした探索
    vector<int>::iterator min_iterator_A = min_element(A.begin(), A.end());
    vector<int>::iterator min_iterator_B = min_element(B.begin(), B.end());
    size_t min_index_A = distance(A.begin(), min_iterator_A);
    size_t min_index_B = distance(B.begin(), min_iterator_B);
    if(min_index_A != min_index_B){
        int time = A[min_index_A] >= B[min_index_B] ? A[min_index_A] : B[min_index_B];
        cout << time << endl;
    }else{
        // A_minとB_minを使う
        int time_A_min_and_B_min = A[min_index_A] + B[min_index_B];

        // B_minとA_semi_min
        int min_A = A[min_index_A];
        A[min_index_A] = 1e05+1;
        vector<int>::iterator semi_min_iterator_A = min_element(A.begin(), A.end());
        size_t semi_min_index_A = distance(A.begin(), semi_min_iterator_A);
        int time_A_semi_min_and_B_min = A[semi_min_index_A] >= B[min_index_B] ? A[semi_min_index_A] : B[min_index_B];
        A[min_index_A] = min_A;

        // A_minとB_semi_min
        int min_B = B[min_index_B];
        B[min_index_B] = 1e05+1;
        vector<int>::iterator semi_min_iterator_B = min_element(B.begin(), B.end());
        size_t semi_min_index_B = distance(B.begin(), semi_min_iterator_B);
        int time_A_min_and_B_semi_min = A[min_index_A] >= B[semi_min_index_B] ? A[min_index_A] : B[semi_min_index_B];

        vector<int> times = {time_A_min_and_B_min, time_A_semi_min_and_B_min, time_A_min_and_B_semi_min};
        cout << *min_element(times.begin(), times.end()) << endl;
    }
}
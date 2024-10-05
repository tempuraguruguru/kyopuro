// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     vector<int> K(N);
//     for(int i = 0; i < N; i++) cin >> K[i];

//     int sum = reduce(K.begin(), K.end());
//     int target = sum / 2;
//     vector<bool> dp(target+1, false);
//     dp[0] = true;

//     for(int k : K){
//         for(int i = target; i >= k; i--){
//             dp[i] = dp[i] || dp[i-k];
//         }
//         if(dp[target]) break;
//     }

//     for(int i = target; i >= 0; i--){
//         if(dp[i]){
//             int othergroupsum = sum - i;
//             if(othergroupsum > i){
//                 cout << othergroupsum << endl;
//                 return 0;
//             }else{
//                 cout << i << endl;;
//                 return 0;
//             }
//         }
//     }
// }


#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> K(N);
    for(int i = 0; i < N; i++) cin >> K[i];

    int total_sum = reduce(K.begin(), K.end());
    int min_diff = total_sum;
    int best_group1_sum = 0;
    int best_group2_sum = 0;

    for(int mask = 0; mask < (1 << N); mask++){
        int group1_sum = 0;
        int group2_sum = 0;

        for(int i = 0; i < N; i++){
            if(mask & (1 << i)){
                group1_sum += K[i];
            }else{
                group2_sum += K[i];
            }
        }

        int diff = abs(group1_sum - group2_sum);
        if(diff < min_diff){
            min_diff = diff;
            best_group1_sum = group1_sum;
            best_group2_sum = group2_sum;
        }
    }
    cout << max(best_group1_sum, best_group2_sum) << endl;
    return 0;
}


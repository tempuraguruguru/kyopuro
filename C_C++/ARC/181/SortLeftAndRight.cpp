#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T, N;
    cin >> T;
    vector<int> res(T);
    for(int i = 0; i < T; i++){
        cin >> N;
        vector<int> C2(N);
        for(int j = 0; j < N; j++){
            cin >> C2[j];
        }
        vector<int> ans(N);
        for(int j = 1; j <= N; j++){
            ans[j-1] = j;
        }

        int count = 0;
        int min = N+1;
        vector<vector<int>> C(N);
        for(int k = 1; k <= N; k++){
            count++;
            if(k >= 2){
                sort(C2.begin(), C2.begin()+k-1);
            }
            if(k <= (N - 1)){
                sort(C2.begin()+k, C2.end());
            }
            C[k-1] = C2;
            // if(equal(C2.cbegin(), C2.cend(), ans.cbegin())){
            //     if(min > count) min = count;
            // }
        }
        res[i] = min;

        int left = 0;
        int right = N-1;
        while(left <= right){
            int mid = (left + right + 1) / 2;
            if(mid >= 2){
                sort(C2.begin(), C2.begin()+mid-1);
            }
            if(mid <= (N - 1)){
                sort(C2.begin()+mid, C2.end());
            }
        }
    }
    for(int i = 0; i < T; i++){
        cout << res[i] << endl;
    }
}
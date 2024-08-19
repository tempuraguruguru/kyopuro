#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    int max = 0;
    int min = 100000;
    for(int i = 0; i < N; i++){
        if(max < A[i]){
            max = A[i];
        }
        if(min > A[i]){
            min = A[i];
        }
    }

    int res = 0;
    int res_max = 0;
    for(int n = min; n <= max+1; n++){
        res = 0;
        for(int i = lower_bound(A.begin(), A.end(), n-1) - A.begin(); i < lower_bound(A.begin(), A.end(), n+2) - A.begin(); i++){
            if(A[i] == n || (A[i]+1) == n || (A[i]-1) == n){
                res++;
            }
        }
        if(res_max < res){
            res_max = res;
        }
    }
    cout << res_max << endl;
}
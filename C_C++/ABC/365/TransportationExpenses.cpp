#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    long long M;
    cin >> N >> M;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    long long total, mid;
    long long left = 0;
    long long right = 1e9;
    while(left < right){
        total = 0;
        mid = (left + right + 1) / 2;
        for(int i = 0; i < N; i++) total += min(mid, (long long)A[i]);
        if(total <= M){
            left = mid;
        }else{
            right = mid - 1;
        }
    }
    if(left == 1e9){
        cout << "infinite" << endl;
        exit(0);
    }
    cout << left << endl;
}

// 二分探索まじむりもうむり、なんでx=0から一ずつ増やしていくのはダメなの...
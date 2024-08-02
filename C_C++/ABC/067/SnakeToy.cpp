#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> L(N);
    for(int i = 0; i < N; i++) cin >> L[i];

    int res = 0;
    sort(L.begin(), L.end(), greater<int>());
    for(int i = 0; i < K; i++){
        res += L[i];
    }
    cout << res << endl;
}
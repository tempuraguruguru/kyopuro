#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> M(N);
    for(int i = 0; i < N; i++){
        cin >> M[i];
        X -= M[i];
    }
    int res = N;
    sort(M.begin(), M.end());
    while(X - M[0] >= 0){
        res++;
        X -= M[0];
    }
    cout << res << endl;
}
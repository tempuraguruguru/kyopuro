#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M, k, s;
    cin >> N >> M;
    vector<vector<int>> S(M, vector<int>());
    for(int i = 0; i < M; i++){
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> s;
            S[i].push_back(s-1);
        }
    }
    vector<int> P(M);
    for(int i = 0; i < M; i++) cin >> P[i];

    int res = 0;
    for(int bit = 0; bit < (1 << N); bit++){
        bool flag = true;
        // vector<int> On = IntPower(bit, N);
        // cout << "Onのスイッチ: ";
        // for(int i = 0; i < On.size(); i++) cout << On[i] << " ";
        // cout << endl;
        // cout << "bit: " << bit << endl;
        for(int i = 0; i < M; i++){
            int count = 0;
            for(auto v : S[i]){
                if(bit & (1 << v)) count++;
            }
            if((count % 2) != P[i]) flag = false;
        }
        if(flag) res++;
        // cout << endl;
    }
    cout << res << endl;
}
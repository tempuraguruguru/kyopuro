#include <iostream>
// #include <set>
// #include <map>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    // map<int, set<int>> scMap;
    // for(int i = 1; i <= N; i++){
    //     scMap[i] = set<int>();
    // }
    // for(int i = 0; i < M; i++){
    //     int s, c; cin >> s >> c;
    //     scMap[s].insert(c);
    // }
    vector<int> S(M), C(M);
    for(int i = 0; i < M; i++){
        cin >> S[i] >> C[i];
        S[i]--;
    }

    for(int res = 0; res < 1000; res++){
        string s = to_string(res);
        if(s.length() != N){
            continue;
        }
        bool flag = true;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                if(j == S[i] && (s[j] - '0') != C[i]){
                    flag = false;
                }
            }
        }
        if(flag){
            cout << res << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    // for(int res = 0; res < 1000; res++){
    //     string s = to_string(res);
    //     if(s.length() != N){
    //         continue;
    //     }
    //     bool flag = true;
    //     for(auto ele : scMap){
    //         cout << "s[ele.first - 1] = " << s[ele.first - 1] << endl;
    //         if(auto iter = ele.second.find(s[ele.first - 1]); iter == ele.second.end()){
    //             flag = false;
    //         }
    //     }
    //     if(flag){
    //         cout << res << endl;
    //         return 0;
    //     }
    // }
    // cout << -1 << endl;
}
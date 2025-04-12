#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> dfs(string& S, int index, int o_count, int K){
    vector<string> results;

    if(index == S.size()){
        if(o_count == K) results.push_back(S);
        return results;
    }

    if(S[index] == '?'){
        // '.' にする
        S[index] = '.';
        auto res_dot = dfs(S, index + 1, o_count, K);
        results.insert(results.end(), res_dot.begin(), res_dot.end());

        // 'o' にする（直前が 'o' でなく、かつ K 未満のとき）
        if((index == 0 || S[index - 1] != 'o') && o_count < K){
            S[index] = 'o';
            auto res_o = dfs(S, index + 1, o_count + 1, K);
            results.insert(results.end(), res_o.begin(), res_o.end());
        }

        // 元に戻す（重要！）
        S[index] = '?';
    }else{
        // 既に 'o' や '.' のとき
        if(S[index] == 'o'){
            if(index > 0 && S[index - 1] == 'o') return results; // 連続 'o' はだめ
            o_count++;
            if(o_count > K) return results;
        }
        auto res = dfs(S, index + 1, o_count, K);
        results.insert(results.end(), res.begin(), res.end());
    }

    return results;
}


int main(){
    int N, K; cin >> N >> K;
    string S; cin >> S;
    vector<string> patterns = dfs(S, 0, 0, K);

    string res = "";
    for(int i = 0; i < N; i++){
        bool o_char = false;
        bool dot_char = false;
        for(int j = 0; j < patterns.size(); j++){
            if(patterns[j][i] == 'o') o_char = true;
            if(patterns[j][i] == '.') dot_char = true;
        }
        if(o_char && dot_char) res += '?';
        if(o_char && !dot_char) res += 'o';
        if(!o_char && dot_char) res += '.';
    }
    cout << res << endl;
}

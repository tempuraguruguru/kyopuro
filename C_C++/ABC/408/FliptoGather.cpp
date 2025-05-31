#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
# include <numeric>
using namespace std;

int main(){
    int T; cin >> T;
    vector<pair<int, string>> cases(T);
    for(int i = 0; i < T; i++){
        int n; cin >> n;
        string s; cin >> s;
        cases[i] = make_pair(n, s);
    }
    // cout << endl;
    for(auto c : cases){
        // cout << c.second << endl;
        bool sequence = false;
        int sequence_count = 0;
        vector<int> sequences = {};
        for(int i = 0; i < c.second.length(); i++){
            if(c.second[i] == '1' && !sequence){// 1 かつ 区間で初
                // cout << c.second[i] << ":  1 true 初" << endl;
                sequence_count++;
                sequence = true;
            }else if(c.second[i] == '1' && sequence){// 1 かつ 区間で連続
                // cout << c.second[i] << ":  1 true 連続" << endl;
                sequence_count++;
            }else{
                // cout << c.second[i] << ":  1 false" << endl;
                // cout << "sequence_count = " << sequence_count << endl;
                if(sequence){
                    sequences.push_back(sequence_count);
                    sequence_count = 0;
                    sequence = false;
                }
            }
        }
        if(sequence){
            sequences.push_back(sequence_count);
        }
        sort(sequences.begin(), sequences.end());
        // for(auto ele : sequences){
        //     cout << ele << " ";
        // }
        // cout << endl;
        if(sequences.size() == 1){
            cout << 0 << endl;
        }else if(sequences.size() > 1){
            sequences.pop_back();
            cout << accumulate(sequences.begin(), sequences.end(), 0) << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
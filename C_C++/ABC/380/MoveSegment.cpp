#include <iostream>
#include <string>
#include <vector>
#include <utility>

std::pair<std::string, int> person {"Bob", 20};
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    string S; cin >> S;
    vector<pair<char, int>> list;

    pair<char, int> p{S[0], 1};
    for(int i = 1; i < N; i++){
        if(p.first != S[i]){
            list.push_back(p);
            p = {S[i], 1};
        }else{
            p.second++;
        }
    }
    list.push_back(p);

    int index;
    int count = 0;
    for(int i = 0; i < list.size(); i++){
        if(list[i].first == '1') count++;
        if(count == K){
            index = i;
            break;
        }
    }
    pair<char, int> save = list[index];
    list[index] = list[index-1];
    list[index-1] = save;

    // for(int i = 0; i < list.size(); i++){
    //     cout << "(" << list[i].first << ", " << list[i].second << ") ";
    // }
    // cout << endl;

    string res = "";
    for(int i = 0; i < list.size(); i++){
        for(int j = 0; j < list[i].second; j++) res += list[i].first;
    }
    cout << res << endl;
}
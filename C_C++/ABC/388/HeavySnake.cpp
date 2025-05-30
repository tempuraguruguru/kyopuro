#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    int N, D; cin >> N >> D;
    vector<pair<int, int>> tl(N);
    for(int i = 0; i < N; i++){
        int T, L; cin >> T >> L;
        tl[i] = make_pair(T, L);
    }
    for(int k = 1; k <= D; k++){
        vector<int> heavies(N);
        for(int j = 0; j < N; j++){
            heavies.push_back(tl[j].first * (tl[j].second + k));
        }
        cout << *max_element(heavies.begin(), heavies.end()) << endl;
    }
}
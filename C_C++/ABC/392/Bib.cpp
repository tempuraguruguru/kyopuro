#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> Q(N), P(N);
    for(int i = 0; i < N; i++) cin >> P[i];
    for(int i = 0; i < N; i++) cin >> Q[i];

    map<int, pair<int, int>> myMap;
    for(int i = 0; i < N; i++){
        myMap[i+1] = {Q[i], P[i]};
    }

    map<int, int> myMap2;
    for(auto [key, pair] : myMap){
        int target = myMap[pair.second].first;
        myMap2[pair.first] = target;
    }
    for(auto [key, num] : myMap2){
        cout << num << " ";
    }
    cout << endl;
}
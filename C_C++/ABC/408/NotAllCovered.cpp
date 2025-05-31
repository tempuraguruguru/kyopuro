#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    vector<int> walls(N + 1, 0);
    for(int i = 0; i < M; i++){
        int l, r; cin >> l >> r;
        walls[l-1]++;
        if(r < N) walls[r]--;
    }
    for(int i = 1; i < N; i++){
        walls[i] += walls[i-1];
    }
    walls.pop_back();
    // for(auto ele : walls){
    //     cout << ele << " ";
    // }
    // cout << endl;
    int min = *min_element(walls.begin(), walls.end());
    cout << min << endl;
}
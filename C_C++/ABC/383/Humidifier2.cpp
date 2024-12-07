#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int H, W, D; cin >> H >> W >> D;
    vector<pair<int, int>> points;
    vector<vector<char>> graph(H, vector<char>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> graph[i][j];
            if(graph[i][j] == '.'){
                points.push_back(pair<int, int>(i, j));
            }
        }
    }
    // for(auto point:points){
    //     cout << point.first << ", " << point.second << endl;
    // }

    int res = 0;
    for(auto point1 : points){
        for(auto point2 : points){
            if(point1 != point2){
                int count = 0;
                for(int i = 0; i < H; i++){
                    for(int j = 0; j < W; j++){
                        if((abs(point1.first - i) + abs(point1.second - j) <= D) || (abs(point2.first - i) + abs(point2.second - j) <= D)){
                            if(graph[i][j] == '.') count += 1;
                        }
                    }
                }
                if(count > res) res = count;
            }
        }
    }
    cout << res << endl;
}
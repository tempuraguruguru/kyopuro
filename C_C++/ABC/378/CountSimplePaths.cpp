#include <iostream>
#include <vector>
#include <set>
using namespace std;

int H, W, K;
vector<vector<char>> grid;
set<pair<int, int>> reachable_points;

int dh[] = {1, -1, 0, 0};
int dw[] = {0, 0, 1, -1};

void dfs(int ch, int cw, int move_count, vector<vector<bool>>& visited, int& path_count){
    if(move_count == K){
        path_count++;
        reachable_points.insert({ch, cw});
        return;
    }

    visited[ch][cw] = true;
    for(int i = 0; i < 4; i++){
        int nh = ch + dh[i];
        int nw = cw + dw[i];
        if(nh >= 0 && nh < H && nw >= 0 && nw < W && grid[nh][nw] == '.' && !visited[nh][nw]){
            dfs(nh, nw, move_count + 1, visited, path_count);
        }
    }
    visited[ch][cw] = false;
}

int main(){
    cin >> H >> W >> K;
    grid.resize(H, vector<char>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> grid[i][j];
        }
    }

    int total_path_count = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(grid[i][j] == '.'){
                vector<vector<bool>> visited(H, vector<bool>(W, false));
                int path_count = 0;
                dfs(i, j, 0, visited, path_count);
                total_path_count += path_count;
            }
        }
    }
    cout << total_path_count << endl;
}

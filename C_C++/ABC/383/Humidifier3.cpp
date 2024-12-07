// #include <iostream>
// #include <vector>
// #include <set>
// #include <queue>
// using namespace std;

// const int dx[4] = {1, -1, 0, 0};
// const int dy[4] = {0, 0, 1, -1};

// vector<pair<int, int>> bfs(int startX, int startY, vector<vector<char>>& graph, int D){
//     int H = graph.size();
//     int W = graph[0].size();
//     vector<vector<bool>> visited(H, vector<bool>(W, false));
//     queue<pair<int, int>> q;
//     q.push({startX, startY});
//     visited[startX][startY] = true;

//     int steps = 0;
//     vector<pair<int, int>> res;
//     while(!q.empty() && steps <= D){
//         int qSize = q.size();
//         for(int i = 0; i < qSize; i++){
//             auto [x, y] = q.front();
//             q.pop();
//             res.push_back(pair<int, int>(x, y));
//             for(int d = 0; d < 4; d++){
//                 int nx = x + dx[d];
//                 int ny = y + dy[d];
//                 if(nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && graph[nx][ny] == '.') {
//                     visited[nx][ny] = true;
//                     q.push({nx, ny});
//                 }
//             }
//         }
//         steps++;
//     }
//     return res;
// }

// int main(){
//     int H, W, D; cin >> H >> W >> D;
//     vector<pair<int, int>> points;
//     vector<vector<char>> graph(H, vector<char>(W));
//     for(int i = 0; i < H; i++){
//         for(int j = 0; j < W; j++){
//             cin >> graph[i][j];
//             if(graph[i][j] == 'H'){
//                 points.push_back(pair<int, int>(i, j));
//             }
//         }
//     }

//     set<pair<int, int>> res;
//     for(auto point : points){
//         vector<pair<int, int>> pl = bfs(point.first, point.second, graph, D);
//         for(auto p : pl){
//             res.insert(p);
//         }
//     }
//     cout << res.size() << endl;
// }


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

int bfs(const vector<pair<int, int>>& starts, vector<vector<char>>& graph, int D){
    int H = graph.size();
    int W = graph[0].size();
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    queue<pair<int, int>> q;

    for(auto& [sx, sy] : starts){
        q.push({sx, sy});
        visited[sx][sy] = true;
    }

    int steps = 0;
    int count = 0;
    while(!q.empty() && steps <= D){
        int qSize = q.size();
        for(int i = 0; i < qSize; i++){
            auto [x, y] = q.front();
            q.pop();
            count++;
            for(int d = 0; d < 4; d++){
                int nx = x + dx[d];
                int ny = y + dy[d];
                if(nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && graph[nx][ny] == '.'){
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        steps++;
    }
    return count;
}

int main() {
    int H, W, D; cin >> H >> W >> D;
    vector<pair<int, int>> points;
    vector<vector<char>> graph(H, vector<char>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> graph[i][j];
            if(graph[i][j] == 'H'){
                points.push_back(pair<int, int>(i, j));
            }
        }
    }

    int res = bfs(points, graph, D);
    cout << res << endl;
}

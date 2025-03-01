#include <iostream>
#include <string>
#include <vector>
using namespace std;

void fill(vector<vector<string>> &grid, int I, int J, string color){
    J = min(J, (int)grid.size() - 1);
    for(int i = I; i <= J; i++){
        for(int j = I; j <= J; j++){
            grid[i][j] = color;
        }
    }
}

int main(){
    int N; cin >> N;
    vector<vector<string>> myGrid(N, vector<string>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            myGrid[i][j] = "?";
        }
    }

    for(int i = 1; i <= N; i++){
        int j = N + 1 - i;
        if(i <= j){
            if(i % 2 == 1){
                fill(myGrid, i-1, j-1, "#");
            }else{
                fill(myGrid, i-1, j-1, ".");
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << myGrid[i][j];
        }
        cout << endl;
    }
}
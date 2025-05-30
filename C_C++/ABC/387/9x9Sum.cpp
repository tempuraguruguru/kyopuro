#include <iostream>
#include <vector>
using namespace std;

int main(){
    int X; cin >> X;
    vector<vector<int>> Grid(9, vector<int>(9));
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            Grid[i][j] = (i+1) * (j+1);
        }
    }
    int total = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(Grid[i][j] != X) total += Grid[i][j];
        }
    }
    cout << total << endl;
}
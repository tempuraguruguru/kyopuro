#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int H, W, X, Y; cin >> H >> W >> X >> Y;
    vector<vector<char>> S(H, vector<char>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> S[i][j];
        }
    }
    string T; cin >> T;

    int throught_home_count = 0;
    int current_x = X - 1;
    int current_y = Y - 1;
    for(int i = 0; i < T.length(); i++){
        if(T[i] == 'U'){
            if(current_x - 1 >= 0){
                if(S[current_x - 1][current_y] == '.'){
                    current_x -= 1;
                }else if(S[current_x - 1][current_y] == '@'){
                    throught_home_count++;
                    S[current_x - 1][current_y] = '.';
                    current_x -= 1;
                }
            }
        }else if(T[i] == 'D'){
            if(current_x + 1 < H){
                if(S[current_x + 1][current_y] == '.'){
                    current_x += 1;
                }else if(S[current_x + 1][current_y] == '@'){
                    throught_home_count++;
                    S[current_x + 1][current_y] = '.';
                    current_x += 1;
                }
            }
        }else if(T[i] == 'L'){
            if(current_y - 1 >= 0){
                if(S[current_x][current_y - 1] == '.'){
                    current_y -= 1;
                }else if(S[current_x][current_y - 1] == '@'){
                    throught_home_count++;
                    S[current_x][current_y - 1] = '.';
                    current_y -= 1;
                }
            }
        }else if(T[i] == 'R'){
            if(current_y + 1 < W){
                if(S[current_x][current_y + 1] == '.'){
                    current_y += 1;
                }else if(S[current_x][current_y + 1] == '@'){
                    throught_home_count++;
                    S[current_x][current_y + 1] = '.';
                    current_y += 1;
                }
            }
        }
    }
    cout << current_x + 1 << " " << current_y + 1 << " " << throught_home_count << endl;
}
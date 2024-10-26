#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<string> S(8);
    for(int i = 0; i < 8; i++) cin >> S[i];

    set<int> row, column;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < S[i].size(); j++){
            if(S[i][j] == '#'){
                row.insert(i);
                column.insert(j);
            }
        }
    }

    int count = (8 * row.size()) + ((8 - row.size()) * column.size());
    cout << 64 - count << endl;
}
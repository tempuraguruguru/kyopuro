#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    int X, Y; cin >> X >> Y;
    vector<vector<int>> patterns;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            vector<int> pattern = {i, j};
            patterns.push_back(pattern);
        }
    }

    double all_cases = patterns.size();
    double cases = 0;
    for(auto pattern : patterns){
        if(pattern[0] + pattern[1] >= X || abs(pattern[0] - pattern[1]) >= Y){
            cases++;
        }
    }
    double res = cases / all_cases;
    cout << fixed << setprecision(15) << res << endl;
}
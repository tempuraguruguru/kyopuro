#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> AB(M, vector<int>(2));
    for(int i = 0; i < M; i++) cin >> AB[i][0] >> AB[i][1];

    vector<int> cities(N+1);
    for(int i = 0; i < M; i++){
        cities[AB[i][0]]++;
        cities[AB[i][1]]++;
    }

    for(int i = 1; i <= N; i++){
        cout << cities[i] << endl;
    }
}
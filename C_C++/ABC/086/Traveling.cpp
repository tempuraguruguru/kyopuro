#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> T(N+1), X(N+1), Y(N+1);
    T[0] = 0, X[0] = 0, Y[0] = 0;
    for(int i = 1; i < N+1; i++) cin >> T[i] >> X[i] >> Y[i];

    int dt, dist;
    bool flag = true;
    for(int i = 0; i < N; i++){
        dt = T[i+1] - T[i];
        dist = abs(X[i+1] - X[i]) + abs(Y[i+1] - Y[i]);
        if(dt < dist){
            cout << "No" << endl;
            exit(0);
        }
        if(dt % 2 != dist % 2){
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;
}
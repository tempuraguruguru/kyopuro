#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    for(int i = 0; i < N; i++) cin >> X[i] >> Y[i];

    long double current_x = 0, current_y = 0;
    long double cost = 0;
    for(int i = 0; i < N; i++){
        cost += sqrt((X[i] - current_x)*(X[i] - current_x) + (Y[i] - current_y)*(Y[i] - current_y));
        current_x = X[i], current_y = Y[i];
    }
    cost += sqrt((current_x)*(current_x) + (current_y)*(current_y));
    cout << fixed << setprecision(10) << cost << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    double N, S; cin >> N >> S;
    vector<double> T = {0};
    for(int i = 0; i < N; i++){
        double t; cin >> t;
        T.push_back(t);
    }
    // for(int i =0 ;i < T.size(); i++){
    //     cout << T[i] << " ";
    // }
    // cout << endl;
    for(int i = 1; i < N+1; i++){
        // cout << T[i] - T[i-1] << endl;
        if(T[i] - T[i-1] >= S + 0.5){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, T, P; cin >> N >> T >> P;
    vector<int> L(N);
    for(int i = 0; i < N; i++) cin >> L[i];

    int day = 0, count;
    while(true){
        count = 0;
        for(int i = 0; i < L.size(); i++){
            if(L[i] >= T) count++;
        }
        if(count >= P){
            cout << day << endl;
            return 0;
        }else{
            for(int j = 0; j < L.size(); j++) L[j]++;
            day++;
        }
    }
}
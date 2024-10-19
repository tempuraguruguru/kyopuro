#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, C;
    cin >> N >> C;
    vector<int> T(N);
    for(int i = 0; i < N; i++) cin >> T[i];

    int count = 1;
    int time = T[0] + C;
    for(int i = 1; i < N; i++){
        if(T[i] >= time){
            count++;
            time = T[i] + C;
        }
    }
    cout << count << endl;
}
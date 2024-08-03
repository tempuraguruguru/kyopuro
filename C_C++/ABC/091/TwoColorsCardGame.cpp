#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){
    int N, M;
    cin >> N;
    vector<string> B(N);
    for(int i = 0; i < N; i++) cin >> B[i];
    cin >> M;
    vector<string> R(M);
    for(int i = 0; i < M; i++) cin >> R[i];

    map<string, int> blue;
    for(int i = 0; i < N; i++){
        blue[B[i]]++;
    }
    map<string, int> red;
    for(int i = 0; i < M; i++){
        red[R[i]]++;
    }

    int max = 0;
    for(auto b : blue){
        if(b.second - red[b.first] > max){
            max = b.second - red[b.first];
        }
    }
    cout << max << endl;
}
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    map<int, int> map;

    for(int i = 0; i < N; i++){
        if(map.find(A[i]) != map.end()){
            cout << map[A[i]] << " ";
        }else{
            cout << -1 << " ";
        }
        map[A[i]] = i+1;
    }
    cout << endl;
}
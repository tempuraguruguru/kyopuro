#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> D(N);
    for(int i = 0; i < N; i++) cin >> D[i];

    set<int> res;
    for(int i = 0; i < N; i++){
        res.insert(D[i]);
    }
    cout << res.size() << endl;
}
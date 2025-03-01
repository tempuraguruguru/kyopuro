#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    set<int> U;
    for(int i = 1; i <= N; i++){
        U.insert(i);
    }
    set<int> A;
    for(int i = 0; i < M; i++){
        int input; cin >> input;
        A.insert(input);
    }
    set<int> res;
    set_difference(U.begin(), U.end(), A.begin(), A.end(), inserter(res, res.begin()));
    cout << res.size() << endl;
    for(auto num : res){
        cout << num << " ";
    }
    cout << endl;
}
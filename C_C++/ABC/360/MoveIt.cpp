#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N), W(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> W[i];

    map<int, vector<int>> M;
    for(int i = 0; i < N; i++){
        map<int, vector<int>>::iterator ite = M.find(A[i]);
        if(ite != M.end()){
            M[A[i]].push_back(W[i]);
        }else{
            vector<int> a;
            a.push_back(W[i]);
            M[A[i]] = a;
        }
    }

    int res = 0;
    for(auto m : M){
        if(m.second.size() > 1){
            sort(m.second.begin(), m.second.end());
            for(int j = 0; j < m.second.size()-1; j++){
                res += m.second[j];
            }
        }
    }
    cout << res << endl;
}
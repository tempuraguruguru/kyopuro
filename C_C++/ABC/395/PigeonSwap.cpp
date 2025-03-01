#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int N, Q; cin >> N >> Q;
    map<int, int> myMap;
    for(int i = 1; i <= N; i++){
        myMap[i] = i;
    }

    int op;
    int a, b;
    vector<int> res;
    for(int i = 0; i < Q; i++){
        cin >> op;
        if(op == 1){
            cin >> a >> b;
            myMap[a] = b;
        }else if(op == 2){
            cin >> a >> b;
            vector<int> nest_a, nest_b;
            for(auto& [bird, value] : myMap){
                if(value == a){
                    nest_a.push_back(bird);
                }
            }
            for(auto& [bird, value] : myMap){
                if(value == b){
                    nest_b.push_back(bird);
                }
            }
            for(int j = 0; j < nest_a.size(); j++){
                myMap[nest_a[j]] = b;
            }
            for(int j = 0; j < nest_b.size(); j++){
                myMap[nest_b[j]] = a;
            }
        }else{
            cin >> a;
            res.push_back(myMap[a]);
        }
    }
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }
}
#include <iostream>
#include <map>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    map<int, int> bag;
    int query, value, count;
    for(int i = 0; i < Q; i++){
        cin >> query;
        if(query == 1){
            cin >> value;
            bag[value]++;
        }else if(query == 2){
            cin >> value;
            bag[value]--;
            if(bag[value] == 0){
                bag.erase(value);
            }
        }else if(query == 3){
            cout << bag.size() << endl;
        }
    }
}
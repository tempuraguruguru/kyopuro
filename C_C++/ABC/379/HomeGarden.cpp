#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int Q; cin >> Q;
    vector<int> pots;
    vector<int> query1(Q), query2(Q);
    for(int i = 0; i < Q; i++){
        cin >> query1[i];
        if(query1[i] == 1){
            query2[i] = -1;
        }else if(query1[i] == 2){
            cin >> query2[i];
        }else{
            cin >> query2[i];
        }
    }
    for(int i = 0; i < Q; i++){
        if(query1[i] == 1){
            pots.push_back(0);
        }else if(query1[i] == 2){
            int T = query2[i];
            for(int j = 0; j < pots.size(); j++) pots[j] += T;
        }else{
            int H = query2[i];
            int res = 0;
            sort(pots.begin(), pots.end());
            while(pots[pots.size()-1] >= H){
                res++;
                pots.pop_back();
            }
            cout << res << endl;
        }
    }
}
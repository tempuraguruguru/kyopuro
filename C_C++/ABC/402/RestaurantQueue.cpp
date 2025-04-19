#include <iostream>
#include <vector>
using namespace std;

int main(){
    int Q; cin >> Q;
    vector<int> queue;
    int query, ticket;
    for(int i = 0; i < Q; i++){
        cin >> query;
        if(query == 1){
            cin >> ticket;
            queue.push_back(ticket);
        }else{
            cout << queue[0] << endl;
            queue.erase(queue.begin());
        }
    }
}
#include <iostream>
#include <vector>
#include <map>
using namespace std;
using ll = long long;

int main(){
    ll N, M;
    cin >> N >> M;
    vector<ll> node(N);
    map<ll, ll> nodes;
    vector<ll> u(N), v(N), w(N);
    for(ll i = 0; i < M; i++){
        cin >> u[i] >> v[i] >> w[i];
    }
    for(ll j = 0; j < M; j++){
        auto it_v = nodes.find(nodes[v[j]]);
        auto it_u = nodes.find(nodes[u[j]]);
        if(it_v != nodes.end()){
            if(it_u == nodes.end()){
                nodes[u[j]] = w[j] - node[v[j]];
            }
        }else{
            if(it_u == nodes.end()){
                nodes[u[j]] = 0;
            }
            nodes[v[j]] = w[j] - nodes[u[j]];
        }
    }
    for(auto it = nodes.begin(); it != nodes.end(); ++it){
        cout << it->second;
        if(next(it) != nodes.end()){
            cout << " ";
        }
    }
    cout << endl;
}
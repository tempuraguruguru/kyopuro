#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cmath>
using namespace std;
using ll = long long;

tuple<vector<int>, int, ll> operation1(int count, vector<int> S, int P, ll V){
    ll maxIte = *max_element(S.begin(), S.begin()+P+1);
    if(maxIte > V){
        return forward_as_tuple(vector<int>(), 0, 0);
    }
    for(int i = 0; i < P; i++){
        S[i] = V;
    }
    return forward_as_tuple(S, P, V);
}

tuple<vector<int>, int, ll> operation2(int count, vector<int> S, int P, ll V){
    ll maxIte = *max_element(S.begin()+P, S.end());
    if(maxIte > V){
        return forward_as_tuple(vector<int>(), 0, 0);
    }
    for(int i = P; i < (int)S.size(); i++){
        S[i] = V;
    }
    return forward_as_tuple(S, P, V);
}

int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> S(N), P(Q);
    vector<ll> V(Q);
    for(int i = 0; i < N; i++) S[i] = 0;
    for(int i = 0; i < Q; i++) cin >> P[i] >> V[i];

    vector<int> s(N);
    for(int i = 0; i < N; i++) S[i] = 0;
    int count = 0;
    bool flag = true;
    for(int n = 0; n < (1 << Q); n++){
        for(int i = 0; i < Q; i++){
            if(operation1(i, s, P[i], V[i]) != forward_as_tuple(vector<int>(), 0, 0)){
            }else{
                if(operation2(i, s, P[i], V[i]) != forward_as_tuple(vector<int>(), 0, 0)){
                }else{
                    flag = !flag;
                    break;
                }
            }
        }
        if(flag){
            count++;
        }
        flag = true;
        for(int i = 0; i < N; i++) S[i] = 0;
    }
    std::cout << (count % 998244353) << endl;
}
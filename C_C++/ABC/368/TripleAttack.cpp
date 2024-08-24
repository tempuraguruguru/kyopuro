#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
using ll = long long;

int CountDead(vector<ll> v){
    ll count = 0;
    sort(v.begin(), v.end());
    count = v.size() - (lower_bound(v.begin(), v.end(), 1) - v.begin());
    return count;
}

int main(){
    int N;
    cin >> N;
    vector<ll> H(N);
    for(int i = 0; i < N; i++) cin >> H[i];
    // sort(H.begin(), H.end(), greater<ll>());
    ll T = 0;

    // while(CountDead(H) != 0){
        // T += 3*(H[head]/5) + H[head]%5;
        // H[head] = 0;
        // head++;
    for(int i = 0; i < N; i++){
        int f = H[i]/5;
        T += f*3;
        H[i] -= f*5;
        while(H[i] > 0){
            T++;
            if(T % 3 == 0){
                H[i] -= 3;
            }else{
                H[i]--;
            }
        }
    }
    cout << T << endl;
}
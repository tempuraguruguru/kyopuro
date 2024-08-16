#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

ll Solve(vector<ll> V, bool first_element){
    ll count = 0;
    ll sum = 0;
    for(ll i = 0; i < (ll)V.size(); i++){
        sum += V[i];
        if(first_element){
            if(i % 2 == 0 && sum <= 0){
                count += abs(sum) + 1;
                sum = 1;
            }else if(i % 2 == 1 && sum >= 0){
                count += sum + 1;
                sum = -1;
            }
        }else{
            if(i % 2 == 0 && sum >= 0){
                count += sum + 1;
                sum = -1;
            }else if(i % 2 == 1 && sum <= 0){
                count += abs(sum) + 1;
                sum = 1;
            }
        }
    }
    return count;
}

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    for(ll i = 0; i < N; i++) cin >> A[i];
    cout << min(Solve(A, true), Solve(A, false)) << endl;
}
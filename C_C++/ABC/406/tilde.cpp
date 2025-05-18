#include <iostream>
#include <vector>
using namespace std;

bool mountain(int a, int b, int c){
    return (a < b && b > c);
}

bool valley(int a, int b, int c){
    return (a > b && b < c);
}

bool check_vector(vector<int> L){
    if(L[0] >= L[1]) return false;
    int mountain_count = 0;
    int valley_count = 0;
    for(int i = 1; i < int(L.size()) - 1; i++){
        if(mountain(L[i-1], L[i], L[i+1])) mountain_count++;
        if(valley(L[i-1], L[i], L[i+1])) valley_count++;
        if(mountain_count > 1 || valley_count > 1){
            return false;
        }
    }
    if(mountain_count == 1 && valley_count == 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int N; cin >> N;
    vector<int> P(N);
    for(int i = 0; i < N; i++) cin >> P[i];
    // cout << endl;

    int tilde_count = 0;
    for(int i = 0; i < int(P.size())-4+1; i++){
        bool flag = false;
        for(int j = i+4; j < int(P.size())+1; j++){
            vector<int> subvector;
            for(int k = i; k < j; k++){
                subvector.push_back(P[k]);
            }
            // for(int k = 0; k < int(subvector.size()); k++){
            //     cout << subvector[k] << " ";
            // }
            if(check_vector(subvector)){
                tilde_count++;
                flag = true;
                // cout << "  true" << endl;
            }else{
                if(flag) break;
            }
            // cout << endl;
        }
    }
    cout << tilde_count << endl;
}
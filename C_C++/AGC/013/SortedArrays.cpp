#include <iostream>
#include <vector>
using namespace std;

bool OR(vector<int> L){
    if(L.size() <= 2){
        return true;
    }else{
        int size = L.size();
        if(L[size-3] <= L[size-2] && L[size-2] <= L[size-1]){
            return true;
        } else if(L[size-3] >= L[size-2] && L[size-2] >= L[size-1]){
            return true;
        } else{
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    vector<vector<int>> ans;
    int j = 0;
    ans.push_back({});
    for(int i = 0; i < N; i++){
        ans[j].push_back(A[i]);
        if(!OR(ans[j])){
            ans[j].pop_back();
            j++;
            ans.push_back({});
            ans[j].push_back(A[i]);
        }
    }
    cout << ans.size() << endl;
}
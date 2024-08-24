#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void str(vector<int> V){
    for(int i = 0; i < V.size(); i++){
        cout << V[i] << " ";
    }
    cout << endl;
}

int CountPositive(vector<int> v){
    int count = 0;
    // sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            count++;
        }
    }
    return count;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int res = 0;
    do{
        sort(A.begin(), A.end(), greater<int>());
        A[0] -= 1; A[1] -= 1;
        res++;
        // cout << CountPositive(A) << endl;
        // str(A);
    }while(CountPositive(A) > 1);
    cout << res << endl;
}
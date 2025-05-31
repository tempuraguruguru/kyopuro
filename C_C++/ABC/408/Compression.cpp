#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    set<int> a;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        a.insert(A[i]);
    }
    cout << a.size() << endl;
    for(auto ele : a){
        cout << ele << " ";
    }
    cout << endl;
}
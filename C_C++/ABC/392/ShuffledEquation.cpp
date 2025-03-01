#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> A(3);
    for(int i = 0; i < 3; i++) cin >> A[i];

    bool flag = false;
    sort(A.begin(), A.end());
    do{
        if(A[0] * A[1] == A[2]){
            flag = true;
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(A.begin(), A.end()));
    cout << "No" << endl;;
    return 0;
}
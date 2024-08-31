#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int A, B;
    vector<int> L(2);
    cin >> L[0] >> L[1];
    sort(L.begin(), L.end());
    A = L[0]; B = L[1];

    if((B - A) == 0){
        cout << 1 << endl;
    }else if((B - A) % 2 != 0){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    double A, B; cin >> A >> B;
    double large_ab = int(A/B + 1);
    double small_ab = int(A/B);
    if(abs(large_ab - A/B) > abs(small_ab - A/B)){
        cout << small_ab << endl;
    }else{
        cout << large_ab << endl;
    }
    // cout << small_ab << " " << A/B << " " << large_ab << endl;
}
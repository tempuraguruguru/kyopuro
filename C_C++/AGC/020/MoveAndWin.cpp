#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;

    int d = abs(A-B) - 1;
    if(d % 2 == 1){
        cout << "Alice" << endl;
    }else{
        cout << "Borys" << endl;
    }
}
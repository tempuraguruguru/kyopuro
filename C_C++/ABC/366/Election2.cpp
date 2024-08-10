#include <iostream>
using namespace std;

int main(){
    int N, T, A;
    cin >> N >> T >> A;
    if(T > N/2 || A > N/2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
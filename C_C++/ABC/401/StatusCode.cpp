#include <iostream>
using namespace std;

int main(){
    int S; cin >> S;
    if(S >= 200 && S <= 299){
        cout << "Success" << endl;
        return 0;
    }
    cout << "Failure" << endl;
}
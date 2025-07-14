#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N; cin >> N;
    for(int i = 0; i < 10; i++){
        string s = string(i, '0') + to_string(N);
        string t = s;
        reverse(t.begin(), t.end());
        if(s == t){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
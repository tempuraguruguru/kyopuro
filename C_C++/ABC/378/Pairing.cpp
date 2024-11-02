#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, int> M;
    for(int i = 0; i < 4; i++){
        int a; cin >> a;
        M[a]++;
    }
    int res = 0;
    for(const auto& pair : M){
        res += pair.second/2;
    }
    cout << res << endl;
}
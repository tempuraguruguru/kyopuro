#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int odd = 0;
    for(int i = 0; i < N; i++){
        if(A[i] % 2 == 1){
            odd++;
        }
    }
    if(odd % 2 == 1){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}
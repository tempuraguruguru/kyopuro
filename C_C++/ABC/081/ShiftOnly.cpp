#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int counter = 0;
    while(true){
        bool flag = true;
        for(int i = 0; i < N; i++){
            if(A[i] % 2 == 0){
                A[i] /= 2;
            }else{
                flag = !flag;
                break;
            }
        }
        if(!flag){
            break;
        }
        counter++;
    }
    cout << counter << endl;
}
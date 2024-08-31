#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int count = 1;
    int exp = A[0];
    for(int i = 1; i < N; i++){
        if((count + 1) % 2 == 0){
            int j = i;
            for(j; j < N-1; j++){
                if(2*A[j] > A[j+1]){
                    break;
                }
            }
            // cout << j << endl;
            exp += 2*A[j];
            count++;
            i = j;
        }else{
            exp += A[i];
            count++;
        }
    }
    cout << exp << endl;
}
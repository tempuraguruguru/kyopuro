#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> house(N), A(M);
    vector<string> B(M);
    for(int i = 0; i < M; i++) cin >> A[i] >> B[i];

    for(int i = 0; i < M; i++){
        if(B[i] == "M"){
            if(house[A[i]-1] == 0){
                house[A[i]-1]++;
                cout << "Yes" << endl;
            }else{
                house[A[i]-1]++;
                cout << "No" << endl;
            }
        }else{
            cout << "No" << endl;
        }
    }
}
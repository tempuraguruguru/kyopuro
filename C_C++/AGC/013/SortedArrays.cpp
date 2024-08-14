#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int count = 0;
    int i;
    for(i = 0; i < N; i++){
        while(i+1 < N && A[i] == A[i+1]) i++;
        if(i+1 < N && A[i] < A[i+1]){
            while(i+1 < N && A[i] <= A[i+1]) i++;
        }else if(i+1 < N && A[i] > A[i+1]){
            while(i+1 < N && A[i] >= A[i+1]) i++;
        }
        count++;
    }
    cout << count << endl;
}
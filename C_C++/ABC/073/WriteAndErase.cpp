#include <iostream>
#include <map>
using namespace std;

int main(){
    int N, a;
    cin >> N;
    map<int, int> A{};
    for(int i = 0; i < N; i++){
        cin >> a;
        A[a]++;
        if(A[a] == 2){
            A.erase(a);
        }
    }
    cout << A.size() << endl;
}
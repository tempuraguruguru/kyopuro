#include <iostream>
#include <vector>
using namespace std;

bool LargeOrSmall(bool flag, int current, int next){
    if(current < next){
        return true;
    }
    if(current > next){
        return false;
    }
    return flag;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    int divide = 0;
    vector<int> ans;
    for(int i = 0; i < N-1; i++){
        int current = A[i];
        int next = A[i+1];
        bool flag = LargeOrSmall(flag, current, next);
        cout << current << " " << next << " " << "flag = " << flag << endl;
        if(flag){}
    }
    cout << divide << endl;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    string N; cin >> N;
    int count1 = 0, count2 = 0, count3 = 0;
    for(int i = 0; i < N.size(); i++){
        if(N[i] == '1') count1++;
        if(N[i] == '2') count2++;
        if(N[i] == '3') count3++;
    }
    if(count1 == 1 && count2 == 2 && count3 == 3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
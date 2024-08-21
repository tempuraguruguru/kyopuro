#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec(3);
    for(int i = 0; i < 3; i++) cin >> vec[i];

    sort(vec.begin(), vec.end());
    int A = vec[0], B = vec[1], C = vec[2];
    int count = 0;
    if((C-B)%2 == 0 && (C-A)%2 == 0){
        count += (C-B)/2 + (C-A)/2;
    }else if(((C-B)%2 == 0 && (C-A)%2 == 1) || ((C-B)%2 == 1 && (C-A)%2 == 0)){
        count += (C-B)/2 + (C-A)/2 + 2;
    }else{
        count += (C-B)/2 + (C-A)/2 + 1;
    }
    cout << count << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> C1(6), C2(6);
    for(int i = 0; i < 6; i++) cin >> C1[i];
    for(int i = 0; i < 6; i++) cin >> C2[i];

    int a, b, c;
    if(C1[0] <= C2[0] && C2[0] <= C1[3]){
        if(C2[3] <= C1[3]){
            a = C2[3] - C2[0];
        }else{
            a = C1[3] - C2[0];
        }
    }else if(C2[0] < C1[0]){
        if(C1[0] <= C2[3] <= C1[3]){
            a = C2[3] - C1[0];
        }else if(C2[3] > C1[3]){
            a = C1[3] - C1[0];
        }else{
            a = 0;
        }
    }else if(C2[0] > C1[3]){
        a = 0;
    }

    if(C1[1] <= C2[1] && C2[1] <= C1[4]){
        if(C2[4] <= C1[4]){
            b = C2[4] - C2[1];
        }else{
            b = C1[4] - C2[1];
        }
    }else if(C2[1] < C1[1]){
        if(C1[1] <= C2[4] <= C1[1]){
            b = C2[4] - C1[1];
        }else if(C2[4] > C1[4]){
            b = C1[4] - C1[1];
        }else{
            b = 0;
        }
    }else if(C2[1] > C1[4]){
        b = 0;
    }

    if(C1[2] <= C2[2] && C2[2] <= C1[5]){
        if(C2[5] <= C1[5]){
            c = C2[5] - C2[2];
        }else{
            c = C1[5] - C2[2];
        }
    }else if(C2[2] < C1[2]){
        if(C1[2] <= C2[5] <= C1[5]){
            c = C2[5] - C1[2];
        }else if(C2[5] > C1[5]){
            c = C1[5] - C1[2];
        }else{
            c = 0;
        }
    }else if(C2[2] > C1[5]){
        c = 0;
    }

    if(a*b*c > 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; i++) a[i] = i+1;

    int res = 0;
    int index = 0;
    int counter;
    for(int i = 0; i < N; i++){
        counter = 0;
        int b = a[i];
        while(b % 2 == 0){
            counter++;
            b /= 2;
        }
        if(res < counter){
            res = counter;
            index = i;
        }
    }
    cout << a[index] << endl;
}
#include <iostream>
using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;

    int total = 0;
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N; j++){
            if(N-i-j < 0){
                continue;
            }
            total = 10000*i + 5000*j + 1000*(N-i-j);
            if(total == Y){
                cout << i << " " << j << " " << N-i-j << endl;
                exit(0);
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
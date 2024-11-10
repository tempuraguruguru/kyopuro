#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int a = N/100;
    int b = (N-a*100)/10;
    int c = (N-a*100-b*10);
    int res1 = b*100 + c*10 + a;
    int res2 = c*100 + a*10 + b;
    cout << res1 << " " << res2 << endl;
}
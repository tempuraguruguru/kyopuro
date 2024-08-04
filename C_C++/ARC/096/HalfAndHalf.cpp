#include <iostream>
#include <limits>
using namespace std;

int main(){
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int sum;
    int min = 5000 * (2 * 1e5);
    for(int ab = 0; ab <= 2*1e5; ab++){
        sum = C * ab;
        int x = X - ab/2;
        int y = Y - ab/2;
        if(x > 0){
            sum += A * x;
        }
        if(y > 0){
            sum += B * y;
        }
        if(sum < min){
            min = sum;
        }
    }
    cout << min << endl;
}
#include <iostream>
using namespace std;

int main(){
    int R; cin >> R;
    if(1 <= R && R <= 99){
        cout << 100 - R << endl;
    }else if(100 <= R && R <= 199){
        cout << 200 - R << endl;
    }else if(200 <= R && R <= 299){
        cout << 300 - R << endl;
    }
}
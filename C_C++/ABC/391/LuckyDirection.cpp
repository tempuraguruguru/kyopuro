#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string D; cin >> D;
    vector<string> directions = {"N", "NE", "E", "SE", "S", "SW", "W", "NW"};
    int direction;
    for(int i = 0; i < directions.size(); i++){
        if(directions[i] == D){
            direction = i;
        }
    }
    int reverse_direction = direction + 4;
    reverse_direction = reverse_direction >= directions.size() ? reverse_direction - directions.size() : reverse_direction;
    cout << directions[reverse_direction] << endl;
}
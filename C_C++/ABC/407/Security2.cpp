#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S; cin >> S;
    vector<int> S_int;
    for(int i = 0; i < S.size(); i++){
        string char_str(1, S[i]);
        S_int.push_back(stoi(char_str));
    }

    int button_a = 0;
    int button_b = 0;
    cout << button_a + button_b << endl;
}
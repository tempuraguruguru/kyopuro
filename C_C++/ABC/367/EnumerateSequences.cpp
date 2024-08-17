#include <iostream>
#include <vector>
#include <string>
using namespace std;

int digit(int N){
    int sum = 0;
    while(N > 0){
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    for(int i = 0; i < N; i++) cin >> R[i];

    string smax = "";
    string smin = "";
    for(int i = 0; i < N; i++){
        smax += to_string(R[i]);
        smin += "1";
    }
    int max = stoi(smax);
    int min = stoi(smin);

    vector<int> res;
    string str;
    bool flag;
    for(int i = min; i <= max; i++){
        flag = true;
        if(digit(i) % K == 0){
            str = to_string(i);
            for(int j = 0; j < N; j++){
                if(int(str[j] - '0') == 0 || int(str[j] - '0') > R[j]){
                    flag = !flag;
                    break;
                }
            }
            if(flag){
                // cout << str << endl;
                for(int k = 0; k < str.length(); k++){
                    cout << str[k] << " ";
                }
                cout << endl;
            }
        }
    }
}
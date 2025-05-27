#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, R; cin >> N >> R;
    vector<pair<int, int>> list(N);
    for(int i = 0; i < N; i++){
        int d, a; cin >> d >> a;
        list[i] = make_pair(d, a);
    }

    int rating = R;
    for(auto ele : list){
        if(ele.first == 1 && 1600 <= rating && rating <= 2799){
            rating += ele.second;
        }else if(ele.first == 2 && 1200 <= rating && rating <= 2399){
            rating += ele.second;
        }
    }
    cout << rating << endl;
}
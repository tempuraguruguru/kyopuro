#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, C, K;
    cin >> N >> C >> K;
    vector<int> T(N);
    for(int i = 0; i < N; i++) cin >> T[i];

    sort(T.begin(), T.end());
    int res = 0;
    int count = 0;
    int wait = 0;
    for(int i = 0; i < N; i++){
        // cout << "count = " << count << ", wait = " << wait << endl;
        if(count == 0){
            wait = T[i];// + K;
            count++;
            res++;
            continue;
        }
        if(T[i]-wait <= K){
            count++;
            if(count == C){
                // res++;
                count = 0;
                // wait = 0;
            }else if(count > C){
                res++;
                count = 0;
            }
        }else{
            // if(0 < count) res++;
            res++;
            count = 1;
            wait = T[i];
        }
    }
    cout << res << endl;
}
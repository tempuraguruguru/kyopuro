// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int N; cin >> N;
//     vector<int> A(N);
//     for(int i = 0; i < N; i++) cin >> A[i];

//     vector<int> res;
//     for(int i = 0; i < N-1; i++){
//         for(int j = i+1; j < N; j++){
//             if(A[i] == A[j]){
//                 res.push_back(j - i + 1);
//                 continue;
//             }
//         }
//     }
//     // for(int i = 0; i < N; i++) cout << res[i] << " ";
//     // cout << endl;
//     if(res.size() == 0){
//         cout << "-1" << endl;
//     }else{
//         cout << *min_element(res.begin(), res.end()) << endl;
//     }
// }

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    map<int, int> myMap;
    int min_distance = 1e7;
    for(int i = 0; i < N; i++){
        if(myMap.count(A[i])){
            min_distance = min(min_distance, i - myMap[A[i]] + 1);
        }
        myMap[A[i]] = i;
    }
    if(min_distance == 1e7){
        cout << "-1" << endl;
    }else{
        cout << min_distance << endl;
    }
}
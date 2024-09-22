#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CheckABC(const string& S, int pos){
    if(pos < 0 || pos + 2 >= S.size()) return 0;
    return (S.substr(pos, 3) == "ABC") ? 1 : 0;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vector<int> X(Q);
    vector<char> C(Q);
    for (int i = 0; i < Q; i++) cin >> X[i] >> C[i];

    int totalABC = 0;
    for(int i = 0; i < N - 2; i++){
        totalABC += CheckABC(S, i);
    }

    for(int i = 0; i < Q; i++){
        int pos = X[i] - 1;
        totalABC -= CheckABC(S, pos - 2);
        totalABC -= CheckABC(S, pos - 1);
        totalABC -= CheckABC(S, pos);
        S[pos] = C[i];
        totalABC += CheckABC(S, pos - 2);
        totalABC += CheckABC(S, pos - 1);
        totalABC += CheckABC(S, pos);
        cout << totalABC << endl;
    }
    return 0;
}

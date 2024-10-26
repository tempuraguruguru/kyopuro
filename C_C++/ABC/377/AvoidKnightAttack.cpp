#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

struct Point{
    ll x, y;
    bool operator<(const Point& other) const{
        return x == other.x ? y < other.y : x < other.x;
    }
};

int main(){
    ll N, M;
    cin >> N >> M;
    vector<ll> A(M), B(M);
    for(int i = 0; i < M; i++) cin >> A[i] >> B[i];

    set<Point> V;
    for(int i = 0; i < M; i++){
        V.insert(Point{A[i], B[i]});
        if(1 <= A[i] + 2 && A[i] + 2 <= N){
            if(1 <= B[i] + 1 && B[i] + 1 <= N) V.insert(Point{A[i]+2, B[i]+1});
            if(1 <= B[i] - 1 && B[i] - 1 <= N) V.insert(Point{A[i]+2, B[i]-1});
        }
        if(1 <= A[i] + 1 && A[i] + 1 <= N){
            if(1 <= B[i] + 2 && B[i] + 2 <= N) V.insert(Point{A[i]+1, B[i]+2});
            if(1 <= B[i] - 2 && B[i] - 2 <= N) V.insert(Point{A[i]+1, B[i]-2});
        }
        if(1 <= A[i] - 1 && A[i] - 1 <= N){
            if(1 <= B[i] + 2 && B[i] + 2 <= N) V.insert(Point{A[i]-1, B[i]+2});
            if(1 <= B[i] - 2 && B[i] - 2 <= N) V.insert(Point{A[i]-1, B[i]-2});
        }
        if(1 <= A[i] - 2 && A[i] - 2 <= N){
            if(1 <= B[i] + 1 && B[i] + 1 <= N) V.insert(Point{A[i]-2, B[i]+1});
            if(1 <= B[i] - 1 && B[i] - 1 <= N) V.insert(Point{A[i]-2, B[i]-1});
        }
    }

    cout << N*N - V.size() << endl;
}
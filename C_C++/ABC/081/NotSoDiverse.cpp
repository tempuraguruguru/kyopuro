#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    map<int, int> nums;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        nums[A[i]]++;
    }

    vector<int> nums2;
    for(auto num : nums){
        nums2.push_back(num.second);
    }
    sort(nums2.begin(), nums2.end(), greater<int>());

    int res = 0;
    while(nums2.size() > K){
        res += nums2.back();
        nums2.pop_back();
    }
    cout << res << endl;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool StringCheck(string S){
    if(S.size() % 2 == 0){
        return false;
    }
    int srash = S.size() - (S.size() / 2) - 1;
    if(S[srash] != '/'){
        return false;
    }
    for(int i = 0; i < srash; i++){
        if(S[i] != '1'){
            return false;
        }
    }
    for(int i = srash + 1; i < int(S.size()); i++){
        if(S[i] != '2'){
            return false;
        }
    }
    return true;
}

int main(){
    int N; cin >> N;
    string S; cin >> S;

    vector<int> srashs;
    for(int i = 0; i < int(S.size()); i++){
        if(S[i] == '/'){
            srashs.push_back(i);
        }
    }

    vector<int> res;
    for(int i = 0; i < int(srashs.size()); i++){
        int srash = srashs[i];

        int index1 = srash - 1;
        int count1 = 0;
        while(index1 >= 0){
            if(S[index1] != '1'){
                break;
            }
            count1++;
            index1--;
        }

        int index2 = srash + 1;
        int count2 = 0;
        while(index2 < int(S.size())){
            if(S[index2] != '2'){
                break;
            }
            count2++;
            index2++;
        }

        string T = "";
        if((count1 + count2 + 1) % 2 == 0){
            for(int s = 0; s < count1; s++) T += '1';
            T += '/';
            for(int t = 0; t < count2-1; t++) T += '2';
        }else{
            for(int s = 0; s < count1; s++) T += '1';
            T += '/';
            for(int t = 0; t < count2; t++) T += '2';
        }

        if(StringCheck(T)) res.push_back(T.size());
    }
    int max = 0;
    for(int i = 0; i < int(res.size()); i++){
        if(max < res[i]) max = res[i];
    }
    cout << max << endl;
}

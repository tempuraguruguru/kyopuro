#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    map<int, set<int>> dish_ingredients;
    map<int, vector<int>> ingredient_dishes;
    map<int, int> remaining_ingredients;
    for(int i = 0; i < M; i++){
        int K; cin >> K;
        for(int j = 0; j < K; j++){
            int ingredient; cin >> ingredient;
            dish_ingredients[i].insert(ingredient);
            ingredient_dishes[ingredient].push_back(i);
        }
        remaining_ingredients[i] = K;
    }
    vector<int> B(N); for(int i = 0; i < N; i++) cin >> B[i];

    set<int> able_ingredients;
    set<int> can_eat_dishes;
    set<int> not_yet_eaten;
    for(int i = 0; i < M; i++) not_yet_eaten.insert(i);

    for(int i = 0; i < N; i++){
        int new_ingredient = B[i];
        able_ingredients.insert(new_ingredient);
        for(int dish_index : ingredient_dishes[new_ingredient]){
            if(not_yet_eaten.count(dish_index)){
                remaining_ingredients[dish_index]--;
                if(remaining_ingredients[dish_index] == 0){
                    can_eat_dishes.insert(dish_index);
                    not_yet_eaten.erase(dish_index);
                }
            }
        }
        cout << can_eat_dishes.size() << endl;
    }
}



#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int N, M; cin >> N >> M;
    map<int, set<int>> dish_ingredients;
    map<int, vector<int>> ingredient_dishes;
    vector<int> remaining_ingredients(M);
    vector<bool> can_eat(M, false);

    for(int i = 0; i < M; i++){
        int K; cin >> K;
        remaining_ingredients[i] = K;
        for(int j = 0; j < K; j++){
            int ingredient; cin >> ingredient;
            dish_ingredients[i].insert(ingredient);
            ingredient_dishes[ingredient].push_back(i);
        }
    }
    vector<int> B(N); for(int i = 0; i < N; i++) cin >> B[i];

    set<int> able_ingredients;
    int can_eat_count = 0;

    for(int i = 0; i < N; i++){
        int new_ingredient = B[i];
        able_ingredients.insert(new_ingredient);
        if(ingredient_dishes.count(new_ingredient)){
            for(int dish_index : ingredient_dishes[new_ingredient]){
                if(!can_eat[dish_index]){
                    remaining_ingredients[dish_index]--;
                    if(remaining_ingredients[dish_index] == 0){
                        can_eat[dish_index] = true;
                        can_eat_count++;
                    }
                }
            }
        }
        cout << can_eat_count << endl;
    }
}
//
// Created by Jonathan Knorn on 16-01-25.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        vector<int> v;
        int k;
        int steps = 0;
        cin >> k;
        for(int j = 0; j < 20; ++j){
            int l;
            cin >> l;
            int step = 0;
            auto it = v.begin();
            for( ;it != v.end() && *it < l; ++it){
                ++step;
            }
            step = v.size()-step;
            if(it == v.end()){
                v.push_back(l);
            } else {
                v.insert(it, l);
            }
                steps += step;

        }
        cout << k << " " << steps << endl;
    }
}
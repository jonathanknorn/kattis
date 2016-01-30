//
// Created by Jonathan Knorn on 16-01-29.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    string pass, m;
    cin >> pass >> m;
    vector<char> v;
    queue<char> order;
    for(auto it = pass.begin(); it != pass.end(); ++it){
        v.push_back(*it);
        order.push(*it);
    }
    for(auto it = m.begin(); it != m.end(); ++it){
        auto unused = find(v.begin(), v.end(), *it);
        if(unused != v.end()){
            char c = order.front();
            if(*it != c){
                break;
            }
            v.erase(unused);
            order.pop();
        }
    }
    if(v.size() == 0){
        cout << "PASS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
    return 0;
}
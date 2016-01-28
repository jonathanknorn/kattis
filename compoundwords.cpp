//
// Created by Jonathan Knorn on 16-01-28.
//

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main(){
    string s;
    set<string> words;
    vector<string> v;
    while(cin >> s){
        for(auto it = v.begin(); it != v.end(); ++it){
            words.insert(s + *it);
            words.insert(*it + s);
        }
        v.push_back(s);
    }
    for(auto it = words.begin(); it != words.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}

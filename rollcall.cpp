//
// Created by Jonathan Knorn on 16-02-23.
//

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    vector<string> v;
    set<string> nameset;
    string f,l;
    while(cin >> f >> l){
        v.push_back(l + " " + f);
        if(nameset.find(f) == nameset.end()){
            nameset.insert(f);
        } else {
            nameset.erase(f);
        }
    }
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); ++it){
        string s = *it;
        auto pos = s.find(" ");
        string l = s.substr(0,pos);
        string f = s.substr(pos+1);
        cout << f;
        if(nameset.find(f) == nameset.end()){
            cout << " " << l;
        }
        cout << endl;
    }

}
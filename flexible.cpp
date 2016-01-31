//
// Created by Jonathan Knorn on 16-01-30.
//

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    int w, n;
    vector<int> v;
    set<int> s;
    cin >> w >> n;
    v.push_back(0);
    v.push_back(w);
    s.insert(w);
    while(n--){
        int m;
        cin >> m;
        for(auto it = v.begin(); it != v.end(); ++it){
            s.insert(abs(m-*it));
        }
        v.push_back(m);
    }
    for(auto it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
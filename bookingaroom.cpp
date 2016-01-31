//
// Created by Jonathan Knorn on 16-01-31.
//

#include <iostream>
#include <set>

using namespace std;

int main(){
    int r, n;
    set<int> s;
    cin >> r >> n;
    for(int i = 0; i < r; ++i){
        s.insert(i+1);
    }
    int m;
    for(int i = 0; i < n; ++i){
        cin >> m;
        s.erase(m);
    }
    auto it = s.begin();
    if(it != s.end()) {
        cout << *it << endl;
    } else {
        cout << "too late" << endl;
    }
}
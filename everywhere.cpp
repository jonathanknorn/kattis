//
// Created by Jonathan Knorn on 16-01-11.
//

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        int n;
        cin >> n;
        set<string> s;
        for(int j = 0; j < n; ++j){
            string str;
            cin >> str;
            s.insert(str);
        }
        cout << s.size() << endl;
    }
    return 0;
}
//
// Created by Jonathan Knorn on 16-01-21.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<string,int> m;
    for(int i = 0; i < n; ++i){
        string log, name;
        cin >> log >> name;
        int prev = m[name];
        cout << name;
        if(log.compare("entry") == 0){
            m[name] = 1;
            cout << " entered";
            if(prev == 1){
                cout << " (ANOMALY)";
            }
            cout << endl;
        } else {
            m[name] = 0;
            cout << " exited";
            if(prev == 0){
                cout << " (ANOMALY)";
            }
            cout << endl;
        }
    }
    return 0;
}
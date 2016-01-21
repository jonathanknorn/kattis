//
// Created by Jonathan Knorn on 16-01-13.
//

#include <iostream>

#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string last;
    cin >> last;
    bool inc = true;
    bool dec = true;
    for(int i = 1; i < n; ++i){
        string s;
        cin >> s;
        if(last.compare(s) < 0){
            dec = false;
        } else if(last.compare(s) > 0){
            inc = false;
        }
        last = s;
    }
    if(inc){
        cout << "INCREASING" << endl;
    } else if(dec){
        cout << "DECREASING" << endl;
    } else {
        cout << "NEITHER" << endl;
    }
    return 0;
}
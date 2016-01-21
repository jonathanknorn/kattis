//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    char last = ' ';
    for(auto it = s.begin(); it != s.end(); ++it){
        char c = *it;
        if (c != last){
            cout << c;
        }
        last = c;
    }
    cout << endl;
    return 0;
}
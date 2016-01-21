//
// Created by Jonathan Knorn on 2015-10-13.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string per = "PER";
    int count = 0;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        char c = s[i];
        if(c != per[i%3]){
            ++count;
        }
    }
    cout << count;
    return 0;
}
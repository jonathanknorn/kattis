//
// Created by Jonathan Knorn on 15-09-26.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
    string line;
    vector<string> v(10,"");
    int n;
    map<string, int> numbers = {
            {"**** ** ** ****", 0},
            {"  *  *  *  *  *", 1},
            {"***  *****  ***", 2},
            {"***  ****  ****", 3},
            {"* ** ****  *  *", 4},
            {"****  ***  ****", 5},
            {"****  **** ****", 6},
            {"***  *  *  *  *", 7},
            {"**** ***** ****", 8},
            {"**** ****  ****", 9},
    };
    for(int l = 0; l < 5; ++l){
        getline(cin, line);
        n = line.size()/4 + 1;
        for(int i = 0; i < n; ++i){
            v[i] += line.substr(i*4, 3);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(numbers.find(v[i]) != numbers.end()){
            ans *= 10;
            ans += numbers[v[i]];
        } else {
            cout << "BOOM!!";
            return 0;
        }
    }
    if(ans%6 == 0){
        cout << "BEER!!";
    } else {
        cout << "BOOM!!";
    }
    return 0;
}
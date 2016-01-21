//
// Created by Jonathan Knorn on 15-09-26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int min = 1;
    int max = 1000;
    int guess = 0;
    string ans = "";
    while(ans.compare("correct") != 0){
        guess = (max + min) / 2;
        cout << guess << endl;
        cout << flush;
        cin >> ans;
        if(ans.compare("lower") == 0){
            max = guess - 1;
        } else if(ans.compare("higher") == 0){
            min = guess + 1;
        }
    }

    return 0;
}
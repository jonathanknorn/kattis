//
// Created by Jonathan Knorn on 16-01-21.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int h;
    cin >> h;
    int max = pow(2,h+1)-1;
    string path;
    int sub = 0;
    int count = 0;
    if(cin >> path){
        for(auto it = path.rbegin(); it != path.rend(); ++it) {
            char c = *it;
            if (c == 'R') {
                sub += pow(2,count);
            }
            ++count;
        }
    }
    int row = pow(2,count)-1;
    cout << max - sub - row << endl;
}
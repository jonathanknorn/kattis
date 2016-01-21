//
// Created by Jonathan Knorn on 16-01-20.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string input;
    cin >> input;
    int level = input.size();
    long scale = pow(2,level);
    long x_min = 0;
    long x_max = scale-1;
    long y_min = 0;
    long y_max = scale-1;
    scale /= 2;
    for(auto it = input.begin(); it != input.end(); ++it){
        int i = *it - '0';
        if(i %2 == 0){
            x_max -= scale;
        } else {
            x_min += scale;
        }
        if(i < 2){
            y_max -= scale;
        } else {
            y_min += scale;
        }
        scale /= 2;
    }
    cout <<  level << " " << x_min << " " << y_min << endl;
    return 0;
}
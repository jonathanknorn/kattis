//
// Created by Jonathan Knorn on 15-09-26.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double length, angle;
    cin >> length >> angle;
    cout << static_cast<int>(length / sin(angle*M_PI/180.0)) + 1;
    return 0;
}
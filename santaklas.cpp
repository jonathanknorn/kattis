//
// Created by Jonathan Knorn on 16-03-08.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double h,v;
    cin >> h >> v;
    if(v >= 0 && v <= 180){
        cout << "safe\n";
    } else {
        if(v >= 270){
            v -= 270;
        } else {
            v = 270 - v;
        }
        if(v == 0){
            cout << static_cast<int>(h) << endl;
        } else {
            double v_rad = v*M_PI / 180.0;
            double sinv = sin(M_PI/2 - v_rad);
            double time = h / sinv;
            cout << static_cast<int>(time) << endl;

        }
    }
    return 0;
}
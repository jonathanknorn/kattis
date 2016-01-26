//
// Created by Jonathan Knorn on 16-01-25.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    while(true){
        double r, m,c;
        cin >> r >> m >> c;
        if(r == 0 && m == 0 && c == 0){
            break;
        }
        cout << setprecision(10) << r * r * M_PI << " " << 4*r*r*c/m << endl;
    }
    return 0;
}
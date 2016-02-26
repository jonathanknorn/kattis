//
// Created by Jonathan Knorn on 16-02-27.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double x1,y1,x2,y2,p;
    cin >> x1;
    while(x1 != 0){
        cin >> y1 >> x2 >> y2 >> p;
        double xdiff = abs(x1-x2);
        double ydiff = abs(y1-y2);
        double xpow = pow(xdiff, p);
        double ypow = pow(ydiff, p);
        double ans = pow(xpow + ypow, 1 / p);
        cout << setprecision(12) << ans << endl;
        cin >> x1;
    }
    return 0;
}
//
// Created by Jonathan Knorn on 16-01-22.
//

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int p,a,b,c,d,n;
    cin >> p >> a >> b >> c >> d >> n;
    double min = -1;
    double max = -1;
    double dec = 0;
    for(int k = 1; k <= n; ++k){
        double curr = p * (sin(a*k+b)+cos(c*k + d) + 2);
        if(curr > max){
            max = curr;
            min = curr;
        }
        if(curr < min || min == -1){
            min = curr;
        }
        if(max-min > dec){
            dec = max - min;
        }
    }
    cout << setprecision(12) << dec << endl;
}
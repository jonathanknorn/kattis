//
// Created by Jonathan Knorn on 15-09-29.
//

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef double (*Functions) (double n);

double t1 (double n){
    if(n == 0 || n == 1){
        return 1;
    } else if(n < 13){
        return t1(n-1)*n;
    } else {
        return -1;
    }
}

double t2 (double n){
    return pow (2.0, n);
}

double t3 (double n){
    return pow (n, 4.0);
}

double t4 (double n){
    return pow (n, 3.0);
}

double t5 (double n){
    return pow (n, 2.0);
}

double t6 (double n){
    return n*log2(n);
}

double t7 (double n){
    return n;
}

int main(){
    double m, n;
    int t;



    Functions functions [7] = {t1, t2, t3, t4, t5, t6, t7};

    cin >> m >> n >> t;
    double ans = functions[t-1](n);
    cout << (ans == -1 || ans > m ? "TLE" : "AC");

    return 0;
}
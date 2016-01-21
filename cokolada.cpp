//
// Created by Jonathan Knorn on 16-01-21.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long k;
    cin >> k;
    int bar = pow(2,ceil(log(k)/log(2)));
    cout << bar;

    long sum = 0;
    long brake = 0;
    while(sum < k){
        if(bar + sum <= k){
            sum += bar;
        } else {
            ++brake;
            bar /= 2;
        }
    }
    cout << " " << brake << endl;
    return 0;
}
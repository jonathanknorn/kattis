//
// Created by Jonathan Knorn on 16-01-30.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    long long n;
    while(cin >> n){
        int ones = 1;
        unsigned long long d = 1;
        while(d%n != 0){
            d *= 10;
            d += 1;
            d = d % n;
            ++ones;
        }
        cout << ones << endl;
    }
    return 0;
}
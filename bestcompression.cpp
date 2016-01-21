//
// Created by Jonathan Knorn on 16-01-21.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned long long n, res;
    int b;
    cin >> n >> b;
    res = pow(2,b+1)-1;
    cout << (res >= n ? "yes" : "no") << endl;
    return 0;
}
//
// Created by Jonathan Knorn on 16-02-22.
//

#include <iostream>

using namespace std;

int main(){
    long n, p, q;
    cin >> n >> p >> q;
    long sum = p + q;
    if(sum % (2*n) < n){
        cout << "paul\n";
    } else {
        cout << "opponent\n";
    }
    return 0;
}
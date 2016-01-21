//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;

    int a = 1;
    int b = 0;

    for(int i = 0; i < k; ++i){
        int a_bef = a;
        a = b;
        b += a_bef;
    }
    cout << a << " " << b << endl;
}
//
// Created by Jonathan Knorn on 16-02-25.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int c = n-3; //number of diagonals
    int sum = 0; 
    for(int i = 1, j = c; j > 0; ++i, --j){ //c*1 + (c-1)*2 + ... + 1*c
        sum += j*i;
    }
    cout << (n * sum) / 4 << endl;
}
//
// Created by Jonathan Knorn on 16-01-30.
//

#include <iostream>

using namespace std;

int main(){
    int b,k,g;
    cin >> b >> k >> g;
    int groups = k/g;
    int days = (b-1)/groups;

    cout << ((b-1)%groups>0 ? days + 1 : days)  << endl;
}
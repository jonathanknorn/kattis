//
// Created by Jonathan Knorn on 16-04-22.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    long x = 0;
    while(n--){
        int p;
        cin >> p;
        x += pow(p/10,p%10);
    }
    cout << x << endl;
    return 0;
}
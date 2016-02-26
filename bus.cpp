//
// Created by Jonathan Knorn on 15-09-27.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, t;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> t;
        cout << static_cast<unsigned long>(pow (2.0, t)-1) << endl;
    }
    return 0;
}

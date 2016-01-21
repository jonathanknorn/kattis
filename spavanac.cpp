//
// Created by Jonathan Knorn on 15-09-27.
//

#include <iostream>

using namespace std;

int main(){
    int h, m;
    cin >> h >> m;
    m += 15;
    if(m/60 == 0){
        h -= 1;
    } else {
        m = m % 60;
    }
    if(h < 0){
        h += 24;
    }
    cout << h << " " << m;
    return 0;
}

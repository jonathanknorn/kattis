//
// Created by Jonathan Knorn on 16-02-29.
//

#include <iostream>

using namespace std;

int main(){
    long c;
    int n;
    cin >> c >> n;
    long train = 0;
    long l, e, s;
    bool possible = true;
    while(n--){
        cin >> l >> e >> s;
        if(l > train){
            possible = false;
        }
        train -= l;
        if(train + e > c){
            possible = false;
        }
        train += e;
        if(s != 0 && train != c){
            possible = false;
        }
    }
    if(e != 0 || s != 0 || train != 0){
        possible = false;
    }
    if(possible){
        cout << "possible\n";
    } else {
        cout << "impossible\n";
    }
    return 0;
}
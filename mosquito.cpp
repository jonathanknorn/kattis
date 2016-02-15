//
// Created by Jonathan Knorn on 16-02-15.
//

#include <iostream>

using namespace std;

int main(){
    int m, p, l, e, r, s, n;
    while(cin >> m >> p >> l >> e >> r >> s >> n){
        while(n--){
            int nl = e*m;
            int np = l / r;
            int nm = p / s;
            l = nl;
            p = np;
            m = nm;
        }
        cout << m << endl;
    }
    return 0;
}
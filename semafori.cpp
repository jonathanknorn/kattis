//
// Created by Jonathan Knorn on 16-01-20.
//

#include <iostream>

using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    int s = 0;
    int t = 0;
    for(int i = 0; i < n; ++i){
        int d,r,g;
        cin >> d >> r >> g;
        t += d-s;
        s = d;
        int diff = t % (r+g);
        if(diff < r){
            t+= r-diff;
        }
    }
    t += l-s;
    cout << t << "\n";
    return 0;
}
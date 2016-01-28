//
// Created by Jonathan Knorn on 16-01-27.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    int c;
    cin >> c;
    for(int i = 0; i < c; ++i){
        int l,m;
        cin >> l >> m;
        int lq = l * 100;
        int rq = l * 100;
        int lr = 0,rr = 0;
        for(int j = 0; j < m; ++j){
            int cl;
            string s;
            cin >> cl >> s;
            if(s.compare("left") == 0){
                if(cl > lq){
                    ++lr;
                    lq = 100*l - cl;
                } else {
                    lq -= cl;
                }
            } else {
                if(cl > rq){
                    ++rr;
                    rq = 100*l - cl;
                } else {
                    rq -= cl;
                }
            }
        }
        ++lr;
        ++rr;
        int rides = lr>rr ? 2*lr-1 : 2*rr;
        cout << rides << endl;

    }
}
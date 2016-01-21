//
// Created by Jonathan Knorn on 16-01-14.
//

#include <iostream>

using namespace std;

int main(){
    int h1,m1,s1,h2,m2,s2;
    char c;
    cin >> h1 >> c >> m1 >> c >> s1 >> h2 >> c >> m2 >> c >> s2;

    int s = s2 - s1;
    int m = m2 - m1;
    int h = h2-h1;

    if(s < 0){
        s += 60;
        m -= 1;
    }
    if(m < 0){
        m += 60;
        h -= 1;
    }
    if(h < 0){
        h += 24;
    }

    if(h+m+s == 0){
        h += 24;
    }
    cout << (h<10 ? "0" : "") << h << ":" << (m<10 ? "0" : "") << m << ":" << (s<10 ? "0" : "") << s << endl;
}
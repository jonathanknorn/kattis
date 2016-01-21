//
// Created by Jonathan Knorn on 16-01-17.
//

#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string, string> m;
    string line,a,b;
    while(getline(cin,line) && line != ""){
        stringstream s(line);
        s >> a;
        s >> b;
        m[b] = a;
    }

    while(cin >> b){
        a = m[b];
        cout << (a == "" ? "eh" : a) << endl;
    }

    return 0;
}
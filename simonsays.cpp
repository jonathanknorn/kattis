//
// Created by Jonathan Knorn on 16-01-13.
//

#include <iostream>

#include <string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    getline(cin,s); //flush
    for(int i = 0; i < n; ++i){
        getline(cin,s);
        if(s.substr(0,10).compare("Simon says") == 0){
           cout <<  s.substr(10) << endl;
        }
    }
    return 0;
}
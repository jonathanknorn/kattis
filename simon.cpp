//
// Created by Jonathan Knorn on 16-02-19.
//

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    getline(cin, s); //flush cin
    while(t--){
        getline(cin, s);
        if(s.size() > 10 && s.substr(0,10).compare("simon says") == 0){
            cout << s.substr(11, string::npos);
        }
        cout << endl;
    }
}
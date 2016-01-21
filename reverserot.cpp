//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

#include <string>

using namespace std;

int main(){
    string rot = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    int n;
    string s;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        cin >> s;
        s = string(s.rbegin(), s.rend());
        for(auto it = s.begin(); it != s.end(); ++it){
            char c = *it;
            cout << rot[(n+rot.find_first_of(c))%28];
        }
        cout << endl;
    }
    return 0;
}
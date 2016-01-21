//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    while(cin >> s){
        for(auto it = s.begin(); it != s.end(); ++it){
            char c = *it;
            if(c == 'a' ||c == 'e' || c == 'i' || c ==  'o' || c == 'u'){
                it += 2;
            }
            cout << c;
        }
        cout << " ";
    }
    return 0;
}
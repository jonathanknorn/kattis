//
// Created by Jonathan Knorn on 16-01-31.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    //Build map with number-values
    map<char,string> m;
    int co = 1;
    char button = '2';
    for(char c = 'a'; c != 'z'+1; ++c){
        m[c] = string(co,button);
        ++co;
        if(co >= 4 && !(c == 'r' || c == 'y')){ //Three letters per button except 7 and 9
            co = 1;
            ++button;
        }
    }
    m[' '] = "0";

    int n;
    cin >> n;

    string s;
    getline(cin, s); // flush cin

    for(int i = 0; i < n; ++i){
        getline(cin, s);
        string ans;
        char last = 'A'; //only lowercase letters in input
        for(auto it = s.begin(); it != s.end(); ++it){
            string str = m[*it];
            if(str[0] == last){
                ans.push_back(' ');
            }
            ans += str;
            last = str[str.size()-1];
        }


        cout << "Case #" << i+1 << ": " << ans << endl;
    }
}
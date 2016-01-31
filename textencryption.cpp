//
// Created by Jonathan Knorn on 16-01-31.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<char,char> m;
    for(char c = 'A'; c != 'Z'+1; ++c){
        m[c] = c;
        m[c+32] = c;
    }


    int n;
    while (true) {
        cin >> n;
        string s;
        getline(cin, s); // flush line
        if(n == 0){
            break;
        }

        getline(cin,s);
        string s2 = "";
        for(auto it = s.begin(); it != s.end(); ++it) {
            char c = *it;
            if (c != ' ') {
                s2.push_back(m[c]);
            }
        }

        int count = 0;
        int start = 0;
        char buffer[s2.size()];
        for(auto it = s2.begin(); it != s2.end(); ++it){
            buffer[n*count+start] = *it;
            ++count;
            if(count*n+start >= s2.size()){
                ++start;
                count = 0;
            }
        }

        buffer[s2.size()] = '\0';
        cout << buffer << endl;
    }
    return 0;
}
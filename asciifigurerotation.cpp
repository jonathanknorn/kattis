//
// Created by Jonathan Knorn on 15-09-26.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
    map<char, char> convert = {
            {' ', ' '},
            {'+', '+'},
            {'-', '|'},
            {'|', '-'},
    };
    string line;
    int n;
    getline(cin, line);
    n = stoi(line);
    while(n != 0) {
        int longest = 0;
        vector <string> v;
        for (int i = 0; i < n; ++i) {
            getline(cin, line);
            v.push_back(line);
            if (line.size() > longest) {
                longest = line.size();
            }
        }
        for (int i = 0; i < longest; ++i) {
            string s = "";
            for (int j = n - 1; j >= 0; --j) {
                if (v[j].size() > i) {
                    s.push_back(convert[v[j][i]]);
                } else{
                    s.push_back(' ');
                }
            }
            s.insert(0,"x");
            auto found = s.find_last_not_of(" ");
            if (found != string::npos) {
                s.erase(found + 1);
            }
            s = s.substr(1);
            cout << s << endl;
        }
        getline(cin, line);
        n = stoi(line);
        if(n != 0){
            cout << endl;
        }
    }
    return 0;
}
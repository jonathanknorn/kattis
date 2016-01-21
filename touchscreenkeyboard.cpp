//
// Created by Jonathan Knorn on 15-09-27.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;
int length;
bool sorter (string a, string b) {
    int j = stoi(a.substr(0, a.size()-length));
    int k = stoi(b.substr(0, b.size()-length));
    if(j!=k){
        return j<k;
    } else {
        return a.compare(a.size()-length,a.size(),b,b.size()-length,b.size()) < 0;

    }

}

int main(){
    int t, l;
    cin >> t;
    string word;

    map<char, int> m = {{'q',0},{'w',10},{'e',20},{'r',30},{'t',40},{'y',50},{'u',60},{'i',70},{'o',80},{'p',90},
                        {'a',1},{'s',11},{'d',21},{'f',31},{'g',41},{'h',51},{'j',61},{'k',71},{'l',81},
                        {'z',2},{'x',12},{'c',22},{'v',32},{'b',42},{'n',52},{'m',62}};
    for(int i = 0; i < t; ++i){
        cin >> word;
        cin >> l;
        length = word.size();
        vector<string> v;
        string s;
        for(int j = 0; j < l; ++j){
            cin >> s;
            int diff = 0;
            for(int k = 0; k < word.size(); ++k){
                char c = word[k];
                char c2 = s[k];
                diff += abs(m[c]/10 - m[c2]/10) + abs(m[c]%10 - m[c2]%10);
            }
            v.push_back(to_string(diff) + s);
        }
        sort (v.begin(), v.end(), sorter);
        for(auto it = v.begin(); it != v.end(); ++it){
            s = *it;
            cout << s.substr(s.size()-length) << " " << s.substr(0, s.size()-length) << endl;
        }

    }
    return 0;
}

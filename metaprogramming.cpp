//
// Created by Jonathan Knorn on 16-02-22.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    string command;
    map<string, int> m;
    while (cin >> command){
        if(command.compare("define") == 0){
            int val;
            cin >> val;
            string name;
            getline(cin, name);
            name.erase(0,1); //trim space between integer and name
            m[name] = val;
        } else { //eval
            string line;
            getline(cin, line);
            line.erase(0,1); //trim first space after command
            size_t pos = line.find_first_of("=<>");
            string a = line.substr(0,pos-1);
            string b = line.substr(pos+2);
            char c = line[pos];
            if(m.find(a) == m.end() || m.find(b) == m.end()){
                cout << "undefined\n";
            } else {
                string ans = "false\n";
                int a_val = m[a];
                int b_val = m[b];
                if(c == '=' && a_val == b_val){
                    ans = "true\n";
                } else if (c == '<' && a_val < b_val){
                    ans = "true\n";
                } else if(c == '>' && a_val > b_val) {
                    ans = "true\n";
                }
                cout << ans;
            }
        }
    }
    return 0;
}
//
// Created by Jonathan Knorn on 16-02-27.
//

#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main(){
    map<string, int> vars;
    map<int, string> ints;
    string command;
    while(cin >> command){
        if(command.compare("def") == 0){
            string x;
            int y;
            cin >> x >> y;
            if(vars.find(x) != vars.end()){
                int old_val = vars[x];
                vars.erase(x);
                ints.erase(old_val);
            }
            vars[x] = y;
            ints[y] = x;
        } else if(command.compare("calc") == 0){
            string line, var;
            char c;
            int sum = 0;
            int mult = 1;
            string ans = "";

            getline(cin, line);
            istringstream iss(line.substr(1));

            while(iss >> var){
                if(vars.find(var) == vars.end()){
                    ans = "unknown";
                    break;
                } else {
                    sum += mult*vars[var];
                }
                iss >> c;
                if(c == '+'){
                    mult = 1;
                } else if(c == '-'){
                    mult = -1;
                } else { //=
                    if(ints.find(sum) != ints.end()){
                        ans = ints[sum];
                    } else {
                        ans = "unknown";
                    }
                    break;
                }
            }
            cout << line.substr(1) << " " << ans << endl;
        } else if(command.compare("clear") == 0){
            vars.clear();
            ints.clear();
        }
    }
}
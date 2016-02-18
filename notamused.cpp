//
// Created by Jonathan Knorn on 16-02-18.
//

#include <iostream>
#include <map>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    map<string, int> log;
    map<string, int> bill;
    int day = 1;
    string command;
    while(cin >> command){ //Open
        string name;
        int time;
        cin >> command; //Enter, Exit or Close
        while(command.compare("CLOSE") != 0){
            cin >> name >> time;
            if(command.compare("ENTER") == 0){
                log[name] = time;
            } else {
                bill[name] += (time - log[name]) * 10;
            }
            cin >> command;
        }
        //Close
        if(day != 1){
            cout << endl;
        }
        cout << "Day " << day << endl;
        for(auto it = bill.begin(); it != bill.end(); ++it){
            string sum = to_string(it->second);
            sum.insert(sum.end()-2,'.');
            cout << it->first << " $" << sum << endl;
        }
        log.clear();
        bill.clear();
        ++day;
    }
}
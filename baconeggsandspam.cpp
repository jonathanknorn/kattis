//
// Created by Jonathan Knorn on 16-02-24.
//

#include <iostream>
#include <sstream>
#include <map>
#include <list>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    getline(cin,s); //flush cin
    while(n > 0){
        map<string,list<string>> m;
        while(n--){
            getline(cin,s);
            istringstream iss(s);
            string name;
            iss >> name;
            string st;
            while(iss >> st){
                m[st].push_back(name);
            }
        }
        for(auto it = m.begin(); it != m.end(); ++it){
            list<string> names = it->second;
            names.sort();
            string order = it->first;
            cout << order;
            for(auto name_it = names.begin(); name_it != names.end(); ++name_it){
                cout << " " << *name_it;
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
        getline(cin,s); // flush cin
    }
}
//
// Created by Jonathan Knorn on 16-01-19.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;
map<string,unsigned long> m;
vector<string> v;

//sorts vector, primarily by value, secondary by name
bool myfunction (string a, string b) {
    unsigned long al = m[a];
    unsigned long bl = m[b];
    if(al != bl){
        return (m[a]>m[b]);
    } else {
        return a.compare(b) < 0;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        v.clear();
        m.clear();
        int n;
        cin >> n;

        //read input
        for(int j = 0; j < n; ++j){
            string name;
            cin >> name;
            name = name.substr(0,name.length()-1);
            string class_string;
            cin >> class_string;
            string throw_away;      //"class"
            cin >> throw_away;


            string class_value = "";    //Empty string to start with
            istringstream ss(class_string);
            string token;
            while(std::getline(ss, token, '-')) {   //iterate through class
                if(token.compare("upper") == 0){
                    class_value.push_back('3');         //add value of class last in string
                } else if(token.compare("middle") == 0){
                    class_value.push_back('2');
                } else if(token.compare("lower") == 0){
                    class_value.push_back('1');
                }
            }
            class_value = string(class_value.rbegin(), class_value.rend()); //reverse string to get highest class value first
            while(class_value.length() != 10) {
                class_value.push_back('2');     //pad with 2:s (middle class) if shorter than 10 classes
            }

            //convert string to unsigned long
            unsigned long value = 0;
            for(auto it = class_value.begin(); it != class_value.end();++it){
                value *= 10;
                value += *it-'0';
            }

            //add to map and vector
            m[name] = value;
            v.push_back(name);
        }

        //sort vector using myfunction
        sort(v.begin(),v.end(),myfunction);

        //print sorted vector
        for(auto it = v.begin(); it != v.end(); ++it){
            cout << *it << endl;
        }
        cout << "==============================" << endl;
    }
    return 0;
}
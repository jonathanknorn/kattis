//
// Created by Jonathan Knorn on 16-01-27.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    getline(cin,s);
    getline(cin,s);

    istringstream iss(s);

    map<char,int> m = {{'G',0},     //Index of characters, used for finding the correct string for each note
                       {'F',1},
                       {'E',2},
                       {'D',3},
                       {'C',4},
                       {'B',5},
                       {'A',6},
                       {'g',7},
                       {'f',8},
                       {'e',9},
                       {'d',10},
                       {'c',11},
                       {'b',12},
                       {'a',13},


    };

    map<int, string> m2 = {{0,"G: "},       //Character for index, used for printing
                       {1,"F: "},
                       {2,"E: "},
                       {3,"D: "},
                       {4,"C: "},
                       {5,"B: "},
                       {6,"A: "},
                       {7,"g: "},
                       {8,"f: "},
                       {9,"e: "},
                       {10,"d: "},
                       {11,"c: "},
                       {12,"b: "},
                       {13,"a: "},
    };

    string note;
    vector<string> v(14,"");        //Stores each notes line

    int count = 1;
    while(iss >> note){
        int time = 1;               //Standard time per not
        char c = note[0];
        if(note.size()>1){
            time  = stoi(note.substr(1));   //Longer time specified
        }
        int index = m[c];                   //Index of the string for the given note
        for(int i = 0; i < 14; ++i){
            char c;
            if(i % 2 == 1 && i != 11){      //Check if note is a line or not
                c = '-';
            } else {
                c = ' ';
            }
            for(int j = 0; j < time; ++j){  //Add the note or space for each line
                if(i == index){
                    v[i].push_back('*');
                } else {
                    v[i].push_back(c);
                }
            }
            if(count != n){                 //Space between each note
                v[i].push_back(c);
            }
        }
        ++count;
    }
    for(int i = 0; i < 14; ++i){            //Print strings
        cout << m2[i] << v[i] << endl;
    }
    return 0;
}
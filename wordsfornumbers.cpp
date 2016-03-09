//
// Created by Jonathan Knorn on 16-03-09.
//

#include <iostream>
#include <sstream>
#include <map>

using namespace std;

map<int, string> names = {{0,"zero"},
                          {1,"one"},
                          {2,"two"},
                          {3,"three"},
                          {4,"four"},
                          {5,"five"},
                          {6,"six"},
                          {7,"seven"},
                          {8,"eight"},
                          {9,"nine"},
                          {10,"ten"},
                          {11,"eleven"},
                          {12,"twelve"},
                          {13,"thirteen"},
                          {14,"fourteen"},
                          {15,"fifteen"},
                          {16,"sixteen"},
                          {17,"seventeen"},
                          {18,"eighteen"},
                          {19,"nineteen"},
                          {20,"twenty"},
                          {30,"thirty"},
                          {40,"forty"},
                          {50,"fifty"},
                          {60,"sixty"},
                          {70,"seventy"},
                          {80,"eighty"},
                          {90,"ninety"}};

int main(){
    string line;
    while(getline(cin, line)){
        istringstream iss(line);
        string s;
        while(iss >> s){

            //Single digits are just printed
            if(s.size() == 1 && s[0] >= '0' && s[0] <= '9') {
                cout << names[s[0] - '0'] << " ";

            //Double digits
            } else if (s.size() == 2 && s[0] >= '0' && s[0] <= '9' && s[1] >= '0' && s[1] <= '9') {

                //10-19 are just printed from the table
                if(s[0] == '1'){
                    cout << names[(s[0] - '0') * 10 + s[1] - '0'] << " ";
                } else {

                    //Print first digit of numers >= 20
                    cout << names[(s[0] - '0') * 10];

                    //If second number isn't a zero, print a dash and the numer
                    if (s[1] != '0') {
                        cout << "-" << names[s[1] - '0'] << " ";

                    //Else just print a space
                    } else {
                        cout << " ";
                    }
                }


            //Non-numbers are just printed with a trailing space
            } else {
                cout << s << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
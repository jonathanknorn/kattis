//
// Created by Jonathan Knorn on 16-02-12.
//

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n) {
        map<int, string> m;
        vector<int> v;
        while (n--) {
            int h, min;
            char c;
            string s;
            cin >> h >> c >> min >> s;  //Read appointments
            string time = to_string(h) + ":" + (min < 10 ? "0" : "") + to_string(min) + " " + s; //Save the read time as a string before modifying integers
            if(h == 12){    //12 am == 0
                h = 0;
            }
            if(s.compare("p.m.") == 0){ //adjust pm-times
                h += 12;
            }
            int index = 60*h + min;     //Save appointments by minutes from midnight
            v.push_back(index);         //save appointments
            m[index] = time;            //and pair starting times with time-strings
        }
        sort(v.begin(), v.end());       //sort appointments by starting-minute
        for(auto it = v.begin(); it != v.end(); ++it){  //Iterate starting-times and print paired time-strings
            cout << m[*it] << endl;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}
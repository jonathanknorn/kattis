//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        //EligibleContestant 2013/09/01 1995/03/12 10
        string name, d1, d2;
        int c;
        cin >> name >> d1 >> d2 >> c;
        cout << name << " ";

        int i1 = stoi(d1.substr(0,4));
        int i2 = stoi(d2.substr(0,4));
        if(i1 >=2010 || i2 >= 1991){
            cout << "eligible" << endl;
        } else if(c >= 41){
            cout << "ineligible" << endl;
        } else {
            cout << "coach petitions" << endl;
        }
    }
    return 0;
}
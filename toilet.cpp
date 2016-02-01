//
// Created by Jonathan Knorn on 16-02-01.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string prefs;
    cin >> prefs;
    auto it = prefs.begin();

    int p1, p2, p3;

    char start = *it;
    ++it;

    char first_visitor = *it;
    if(start == 'U'){
        p1 = first_visitor == 'D' ? 2 : 0;
        p2 = 1;
    } else {
        p1 = 1;
        p2 = first_visitor == 'U' ? 2 : 0;
    }
    p3 = start != first_visitor ? 1 : 0;
    char prev = *it;

    ++it;

    while(it != prefs.end()){
        if(*it == 'D'){
            p1 += 2;
        } else {
            p2 += 2;
        }
        p3 += prev != *it ? 1 : 0;
        prev = *it;
        ++it;
    }
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
}
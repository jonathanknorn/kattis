//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){
    long l;
    cin >> l;

    bitset<31> b(l);
    string s = b.to_string();   //bit-form

    size_t found = s.find_first_not_of("0");
    s =s.substr(found);       //leading zeroes removed

    s = string(s.rbegin(), s.rend());    //reversed

    bitset<31> b2(s);          //converted back to long
    cout << b2.to_ulong() << endl;
    return 0;
}
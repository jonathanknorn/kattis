//
// Created by Jonathan Knorn on 16-02-11.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int original = stoi(s);
    next_permutation(s.begin(), s.end());
    int next = stoi(s);

    cout << (next > original ? next : 0) << endl;

    return 0;
}
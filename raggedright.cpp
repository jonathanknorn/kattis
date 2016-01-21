//
// Created by Jonathan Knorn on 15-09-26.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string line;
    stack<int> s;
    int l = 0;
    int sum = 0;

    while(getline(cin, line)){
        int i = line.size();
        if(i != 0) {
            s.push(i);
            if (i > l) {
                l = i;
            }
        }
    }
    s.pop();
    while(!s.empty()) {
        int i = s.top();
        s.pop();
        sum += (l - i) * (l - i);
    }
    cout << sum;
    return 0;
}
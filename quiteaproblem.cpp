//
// Created by Jonathan Knorn on 16-03-12.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string line;
    string problem = "problem";
    while(getline(cin, line)){
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        if(line.find(problem) != string::npos){
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
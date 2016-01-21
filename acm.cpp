//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    int t;
    int points = 0;
    int solved = 0;
    string name, result;
    map<string, int> m;
    while(true){
        cin >> t;
        if(t == -1){
            break;
        }
        cin >> name >> result;
        if(result.compare("wrong") == 0){
            m[name] += 20;
        } else {
            ++solved;
            points += t;
            points += m[name];
        }
    }
    cout << solved << " " << points << endl;
    return 0;
}
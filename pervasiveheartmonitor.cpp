//
// Created by Jonathan Knorn on 16-02-12.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>

using namespace std;

int main(){
    string s;
    map<string, double> m;
    while(getline(cin, s)){
        stringstream ss;
        ss << s;
        string w;
        string name = "";
        double sum = 0;
        int count = 0;
        while(ss >> w){
            if(w[0] >= '0' && w[0] <= '9'){
                sum += stod(w);
                ++count;
            } else {
                name += w + " ";
            }
        }
        sum /= count;
        name.pop_back();
        cout << setprecision(10) << sum << " " << name << endl;
    }
    return 0;
}
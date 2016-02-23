//
// Created by Jonathan Knorn on 16-02-24.
//

#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string numbers_string;
    while(getline(cin, numbers_string)){
        int sum = 0;
        istringstream iss(numbers_string);
        for (int n; iss >> n; ) {
            sum += n;
        }
        cout << sum/2 << endl;
    }
    return 0;
}
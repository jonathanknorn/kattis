//
// Created by Jonathan Knorn on 15-09-27.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char c;
    int u = 0;
    int l = 0;
    int w = 0;
    int s = 0;
    int sum = 0;
    while(cin >> c){
        if(c > 64 && c < 91){
            ++u;
        } else if(c > 96 && c < 123){
            ++l;
        } else if(c == 95){
            ++w;
        } else {
            ++s;
        }
        ++sum;
    }
    cout << setprecision(15);
    cout << static_cast<long double>(w)/static_cast<long double>(sum) << endl;
    cout << static_cast<long double>(l)/static_cast<long double>(sum) << endl;
    cout << static_cast<long double>(u)/static_cast<long double>(sum) << endl;
    cout << static_cast<long double>(s)/static_cast<long double>(sum) << endl;
    return 0;
}

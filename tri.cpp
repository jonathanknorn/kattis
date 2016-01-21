//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b==c){
        cout << a << "+" << b << "=" << c << endl;
    } else if (a-b == c){
        cout << a << "-" << b << "=" << c << endl;
    } else if (a*b == c){
        cout << a << "*" << b << "=" << c << endl;
    } else if (a/b == c && a%c == 0){
        cout << a << "/" << b << "=" << c << endl;
    } else if (a == b+c){
        cout << a << "=" << b << "+" << c << endl;
    } else if (a == b-c){
        cout << a << "=" << b << "-" << c << endl;
    } else if (a == b*c){
        cout << a << "=" << b << "*" << c << endl;
    } else if (a == b/c && b%c == 0){
        cout << a << "=" << b << "/" << c << endl;
    }
    return 0;
}
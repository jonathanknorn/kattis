//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

using namespace std;

int main(){
    long n,d;
    cin >> n >> d;
    while(n!= 0 && d!= 0){
        cout << n/d << " " << n%d << " / " << d << endl;
        cin >> n >> d;
    }
    return 0;
}
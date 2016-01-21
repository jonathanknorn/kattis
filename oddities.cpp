//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        cout << k << " is ";
        cout << (k%2==0 ?  "even" : "odd") << endl;
    }
    return 0;
}
//
// Created by Jonathan Knorn on 16-01-31.
//

#include <iostream>

using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    int c = n;
    while(c--){
        int m;
        cin >> m;
        t -= m;
        if(t < 0){
            cout << n-c-1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}
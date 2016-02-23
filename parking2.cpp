//
// Created by Jonathan Knorn on 16-02-23.
//

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min = 100;
        int max = -1;
        while(n--){
            int x;
            cin >> x;
            min = x < min ? x : min;
            max = x > max ? x : max;
        }
        cout << 2*(max-min) << endl;
    }
    return 0;
}
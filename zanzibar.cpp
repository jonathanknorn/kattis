//
// Created by Jonathan Knorn on 16-01-21.
//

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        long sum = 0;
        long prev, cur;
        cin >> prev >> cur;
        while(cur != 0){
            sum += cur > 2*prev ? cur-2*prev : 0;
            prev = cur;
            cin >> cur;
        }
        cout << sum << endl;
    }
    return 0;
}
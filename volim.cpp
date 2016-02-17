//
// Created by Jonathan Knorn on 16-02-16.
//

#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    int n;
    cin >> n;
    int sum = 0;
    while(n--){
        int t;
        char z;
        cin >> t >> z;
        sum += t;
        if(sum >= 210){
            break;
        }
        if(z == 'T'){
            ++k;
        }
    }
    k = k % 8;
    k = k == 0 ? 8 : k;
    cout << k << endl;
    return 0;
}
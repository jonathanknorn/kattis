//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int t;
        cin >> t;
        if(t<0){
            ++sum;
        }
    }
    cout << sum;
    return 0;
}
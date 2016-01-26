//
// Created by Jonathan Knorn on 2015-10-30.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int s, d;
        cin >> s >> d;
        if(d > s || (s + d )% 2 != 0){
            cout << "impossible\n";
        } else {
            int x = (s + d)/2;
            int y = s - x;
            cout << x << " " << y << "\n";

        }
    }


    return 0;
}
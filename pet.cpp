//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

using namespace std;

int main(){
    int sum = -1;
    int w = -1;
    for(int i = 0; i < 5; ++i){
        int n_sum = 0;
        for(int j = 0; j < 4; ++j){
            int n;
            cin >> n;
            n_sum += n;
        }
        if(n_sum>sum) {
            sum = n_sum;
            w = i+1;
        }
    }
    cout << w << " " << sum << endl;
    return 0;
}
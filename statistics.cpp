//
// Created by Jonathan Knorn on 16-01-30.
//

#include <iostream>
#include <map>
#include <climits>

using namespace std;

int main(){
    int n;
    for(int i = 1; cin >> n; ++i){
        long min = LONG_MAX, max = LONG_MIN;
        for(int i = 0; i < n; ++i){
            long m;
            cin >> m;
            min = m < min ? m : min;
            max = m > max ? m : max;
        }
        cout << "Case " << i << ": " << min << " " << max << " " << max-min << endl;
    }

    return 0;
}
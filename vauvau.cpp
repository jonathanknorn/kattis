//
// Created by Jonathan Knorn on 16-02-01.
//

#include <iostream>

using namespace std;

int main(){
    string ans[3] = {"none", "one", "both"};

    int d[4];
    for (int i = 0; i< 4; ++i){
        cin >> d[i];
    }
    int pmg[3];
    for(int i = 0; i < 3; ++i){
        cin >> pmg[i];
    }
    for(int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 4; j += 2) {
            int time = pmg[i] % (d[j] + d[j + 1]);
            sum += time > 0 && time <= d[j] ? 1 : 0;
        }
        cout << ans[sum] << endl;
    }
    return 0;
}
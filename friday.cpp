//
// Created by Jonathan Knorn on 16-01-28.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int d, m;
        cin >> d >> m;
        int count = 0;
        int days = 0;
        for(int j = 0; j < m; ++j){
            int dd;
            cin >> dd;
            if(dd >= 13){
                days += 13;
                if(days % 7 == 6){
                    ++count;
                }
                days += dd-13;
            } else {
                days += dd;
            }
        }
        cout << count << endl;
    }
    return 0;
}
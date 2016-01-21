//
// Created by Jonathan Knorn on 16-01-13.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        map<long,int> m;
        int g;
        cin >> g;
        for(int j = 0; j < g; ++j){
            long c;
            cin >> c;
            if(m[c] == 0){
                ++m[c];
            } else {
                m.erase(c);
            }
        }
        cout << "Case #" << (i+1) << ": " << m.begin()->first << endl;
    }
    return 0;
}
//
// Created by Jonathan Knorn on 16-01-11.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != -1){
        int last = 0;
        int sum = 0;
        for(int i = 0; i < n; ++i){
            int s,t;
            cin >> s >> t;
            sum += s*(t-last);
            last = t;
        }
        cout << sum << " miles" << endl;
        cin >> n;
    }
    return 0;
}
//
// Created by Jonathan Knorn on 16-02-15.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,int> m;
    for(int i = 0; i < 256; ++i){
        int code = (i ^ (i << 1)) % 256;
        m[code] = i;
    }
    int n;
    cin >> n;
    while(n--){
        int code;
        cin >> code;
        cout << m[code] << " ";
    }

    return 0;
}
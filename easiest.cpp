//
// Created by Jonathan Knorn on 16-01-12.
//

#include <iostream>

#include <map>

using namespace std;

map<int, int> m;

int count(int n){
    if(n == 0){
        return 0;
    } else if(m[n] == 0){
        m[n] = n%10 + count(n/10);
    }
    return m[n];
}

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        for(int p = 11;true;++p){
            int res = n*p;
            if(count(res) == count(n)){
                cout << p << endl;
                break;
            }
        }
    }
    return 0;
}
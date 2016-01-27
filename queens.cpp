//
// Created by Jonathan Knorn on 16-01-27.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    typedef pair<int, int> Key;
    map<Key, int> m;
    bool correct = true;
    for(int i = 0; i < n; ++i){
        int a,b;
        cin >> a >> b;
        Key k1 = make_pair(-1,b);
        Key k2 = make_pair(a,-1);
        Key k3;
        if(a < b){
            k3 = make_pair(0,b-a);
        } else {
            k3 = make_pair(a-b,0);
        }
        if(m[k1] == 0 && m[k2] == 0 && m[k3] == 0){
            m[k1] = 1;
            m[k2] = 1;
            m[k3] = 1;
        } else {
            correct = false;
        }
    }
    cout << (correct ? "CORRECT" : "INCORRECT") << endl;
    return 0;
}
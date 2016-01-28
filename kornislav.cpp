//
// Created by Jonathan Knorn on 16-01-28.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i < 4; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    cout << (v[0] * v[2]) << endl;
}
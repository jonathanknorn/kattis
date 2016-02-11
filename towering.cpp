//
// Created by Jonathan Knorn on 16-02-11.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    for(int i = 0; i < 6; ++i){
        int j;
        cin >> j;
        v.push_back(j);
    }
    int a, b;
    cin >> a >> b;

    sort(v.begin(), v.end());

    do{
        if(v[0] + v[1] + v[2] == a){
            break;
        }
    } while (next_permutation(v.begin(), v.end()));

    for(int i = 2; i >= 0; --i){
        cout << v[i] << " ";
    }
    for(int i = 5; i >= 3; --i){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
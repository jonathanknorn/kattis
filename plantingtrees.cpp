//
// Created by Jonathan Knorn on 16-01-31.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int m;
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());

    int max = 0;
    int i = 1;
    for(auto it = v.rbegin(); it != v.rend(); ++it){
        int m = *it;
        m += i + 1;
        max = m > max ? m : max;
        ++i;
    }
    cout << max << endl;
    return 0;
}
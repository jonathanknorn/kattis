//
// Created by Jonathan Knorn on 16-02-12.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_arith(vector<long>& v) {
    auto beg = v.begin();
    auto it = v.begin();
    auto it2 = v.begin();
    ++it;
    ++it2; //second
    int diff = *it - *beg;
    ++it; //third
    for (; it != v.end(); ++it, ++it2) {
        if(*it - *it2 != diff){
            return false;
        }
    }
    return true;
}



int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        vector<long> v;
        for(int i = 0; i < m; ++i){
            long val;
            cin >> val;
            v.push_back(val);
        }

        if(is_arith(v)){
            cout << "arithmetic" << endl;
        } else {
            sort(v.begin(), v.end());
            if(is_arith(v)) {
                cout << "permuted arithmetic" << endl;
            } else {
                cout << "non-arithmetic" << endl;
            }
        }
    }
    return 0;
}
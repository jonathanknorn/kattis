//
// Created by Jonathan Knorn on 15-10-06.
//

#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        int n, m;
        cin >> n >> m;
        string ans = "";
        string s;
        vector<int> v(m,0);
        for(int j = 0; j < n; ++j){
            cin >> s;
            bitset<100> b(s);
            for(int k = 0; k < m; ++k){
                if(b[k]){
                    ++v[m-1-k];
                }
            }
        }
        for(auto it = v.begin(); it != v.end(); ++it){
            int val = *it;
            if(val > n/2){
                ans += "1";
            } else {
                ans += "0";
            }
        }
        cout << ans << endl;
    }
    return 0;
}
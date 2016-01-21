//
// Created by Jonathan Knorn on 15-09-27.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n-1);
    for(int i = 2; i <= n; ++i){
        v[i-2] = i;
    }
    while(true){
        int m = 1;
        for(int i = 0; i < n-1;){
            if(v[i] != 0){
                if(m == 1){
                    m = v[i];
                }
                if(k == 1){
                    cout << v[i];
                    return 0;
                }
                v[i] = 0;
                i += m;
                k--;
            } else {
                i += m;
            }
        }
    }
    return 0;
}

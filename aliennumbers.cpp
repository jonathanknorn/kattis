//
// Created by Jonathan Knorn on 16-01-29.
//

#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; ++i){
        string n, source, dest;
        cin >> n >> source >> dest;
        long long s_base = source.size();
        long long d_base = dest.size();
        long long n_val = 0;
        int p = 0;

        for(auto it = n.rbegin(); it != n.rend(); ++it){        //Convert source to decimal
            auto pos = find(source.begin(), source.end(),*it);
            n_val += (pos - source.begin())*pow(s_base,p++);
        }

        long long base = static_cast<int>(log(n_val)/log(d_base));

        string ans = "";
        while(base >= 0){
            long long num = pow(d_base,base);
            if(n_val >= num){
                long long sub = n_val / num;
                n_val -= sub * num;

                ans.push_back(dest[sub]);
            } else {
                ans.push_back(dest[0]);
            }
            --base;
        }
        cout << "CASE #" << i << ": " << ans << endl;

    }
    return 0;
}
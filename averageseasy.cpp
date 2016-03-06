//
// Created by Jonathan Knorn on 16-01-28.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        double n, m, cs_sum = 0, e_sum = 0;
        vector<int> v;
        cin >> n >> m;
        
        //Read the IQ of all computer science and economics students
        for(int i = 0; i < n; ++i){
            double iq;
            cin >> iq;
            //store CS IQ in vector v
            v.push_back(iq);
            //add to sum of CS IQ
            cs_sum += iq;
        }
        
        for(int i = 0; i < m; ++i){
            double iq;
            cin >> iq;
            //add to sum of economics IQ
            e_sum += iq;
        }
        
        //Calculate IQ averages
        double cs_avg = cs_sum/n;
        double e_avg = e_sum/m;

        int ans = 0;
        for(auto it = v.begin(); it != v.end(); ++it){
            //for each cs student with an iq lower than cs-average and higher than e-average, increment answer
            if(*it < cs_avg && *it > e_avg){
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
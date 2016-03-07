//
// Created by Jonathan Knorn on 16-03-07.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        double n, m, cs_avg = 0, e_avg = 0;
        vector<double> v;
        cin >> n >> m;

        //Read the IQ of all computer science and economics students
        for(int i = 0; i < n; ++i){
            double iq;
            cin >> iq;
            //store CS IQ in vector v
            v.push_back(iq);
            //add to avg of CS IQ
            cs_avg += iq/n;
        }

        for(int i = 0; i < m; ++i){
            double iq;
            cin >> iq;
            //add to avg of economics IQ
            e_avg += iq/m;
        }

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
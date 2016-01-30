//
// Created by Jonathan Knorn on 16-01-28.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        int n, m, n_sum = 0, m_sum = 0;
        vector<int> v;
        cin >> n >> m;
        for(int j = 0; j < n; ++j){
            int k;
            cin >> k;
            v.push_back(k);
            n_sum += k;
        }
        for(int j = 0; j < m; ++j){
            int k;
            cin >> k;
            m_sum += k;
        }
        double n_avg = static_cast<double>(n_sum)/n;
        double m_avg = static_cast<double>(m_sum)/m;

        int sum = 0;
        for(auto it = v.begin(); it != v.end(); ++it){
            if(*it < n_avg && *it > m_avg){
                ++sum;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
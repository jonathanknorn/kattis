//
// Created by Jonathan Knorn on 16-01-26.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    for(int c = 1; cin >> n; ++c){
        vector<long> v;
        vector<long> sums;
        vector<long> nums;
        map<long,long> closest;

        for(int i = 0; i < n; ++i){
            long l;
            cin >> l;
            v.push_back(l);
        }

        for(auto it = v.begin(); it != v.end(); ++it){
            long a = *it;
            for(auto it2 = v.begin(); it2 != v.end(); ++it2){
                if(it != it2) {
                    long b = *it2;
                    sums.push_back(a + b);
                }
            }
        }

        int m;
        cin >> m;
        for(int i = 0; i < m; ++i){
            long l;
            cin >> l;
            nums.push_back(l);
            closest[l] = sums[0];
        }
        for(auto it = sums.begin(); it != sums.end(); ++it){
            long num = *it;
            for(auto it2 = nums.begin(); it2 != nums.end(); ++it2){
                long target = *it2;
                if(abs(num-target) < abs(target-closest[target])){
                    closest[target] = num;
                }
            }
        }
        cout << "Case " << c << ":" << endl;
        for(auto it = nums.begin(); it != nums.end(); ++it){
            cout << "Closest sum to " << *it << " is " << closest[*it] << "." << endl;
        }
    }
    return 0;
}
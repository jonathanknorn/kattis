//
// Created by Jonathan Knorn on 16-01-14.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int m;
        cin >> m;
        vector<int> r,b;
        for(int j = 0; j < m; ++j){
            int l;
            cin >> l;
            char c;
            cin >> c;
            if(c=='R'){
                r.push_back(l-1);
            } else {
                b.push_back(l-1);
            }
        }
        sort(r.begin(), r.end());
        sort(b.begin(), b.end());

        int sum = 0;

        while(b.size() > 0 && r.size() > 0){
            sum += b.back();
            b.pop_back();

            sum += r.back();
            r.pop_back();
        }
        cout << "Case #" << i+1 << ": " << sum << endl;
    }
}
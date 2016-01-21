//
// Created by Jonathan Knorn on 16-01-13.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(true){
        if(n == 0){
            break;
        }
        vector<int> a,a2,b;
        for(int i = 0; i < n; ++i){
            int c;
            cin >> c;
            a.push_back(c);
            a2.push_back(c);
        }
        sort(a2.begin(), a2.end());
        for(int i = 0; i < n; ++i){
            int c;
            cin >> c;
            b.push_back(c);
        }
        sort(b.begin(), b.end());
        map<int,int> m;
        auto it2 = b.begin();
        for(auto it = a2.begin(); it != a2.end(); ++it){
            m[*it] = *it2;
            ++it2;
        }
        for(auto it = a.begin(); it != a.end(); ++it){
            cout << m[*it] << endl;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}
//
// Created by Jonathan Knorn on 16-01-27.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==0){
            break;
        }
        map<int,string> map;
        vector<pair<pair<double,double>,pair<double,double>>> v;
        for(int i = 0; i < n; ++i){
            double x1,y1,x2,y2;
            string type;
            cin >> x1 >> y1 >> x2 >> y2 >> type;
            map[i] = type;
            v.push_back(make_pair(make_pair(x1,y1),make_pair(x2,y2)));
        }
        int m;
        cin >> m;
        for(int j = 0; j < m; ++j){
            double x,y;
            string peanut_type;
            cin >> x >> y >> peanut_type;
            cout << peanut_type;
            int index = 0;
            for(auto it = v.begin(); it != v.end(); ++it){
                auto box = *it;
                if(x >= box.first.first && y >= box.first.second && x <= box.second.first && y <= box.second.second){
                    string box_type = map[index];
                    if(box_type == peanut_type){
                        cout << " correct" << endl;
                    } else {
                        cout << " " << box_type << endl;
                    }
                    break;
                }
                ++index;
            }
            if(index == v.size()){
                cout << " floor" << endl;
            }
        }
    cout << endl;
    }
    return 0;
}
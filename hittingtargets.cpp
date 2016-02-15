//
// Created by Jonathan Knorn on 16-02-15.
//

#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> Coordinate;
typedef pair<Coordinate, Coordinate> Rectangle;
typedef pair<Coordinate, int> Circle;

int main(){
    vector<Rectangle> rec;
    vector<Circle> cir;
    int m;
    cin >> m;
    while(m--){
        string s;
        cin >> s;
        if(s.compare("rectangle") == 0){
            int x1,x2,y1,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            rec.push_back(make_pair(make_pair(x1,y1),make_pair(x2,y2)));
        } else {
            int x,y,r;
            cin >> x >> y >> r;
            cir.push_back(make_pair(make_pair(x,y),r));
        }
    }
    int n;
    cin >> n;
    while(n--){
        int x,y;
        cin >> x >> y;
        int count = 0;
        for(auto it = rec.begin(); it != rec.end(); ++it){
            int x1 = (*it).first.first;
            int y1 = (*it).first.second;
            int x2 = (*it).second.first;
            int y2 = (*it).second.second;
            if(x >= x1 && x <= x2 && y >= y1 && y <= y2){
                ++count;
            }
        }
        for(auto it = cir.begin(); it != cir.end(); ++it){
            int x1 = (*it).first.first;
            int y1 = (*it).first.second;
            int r = (*it).second;
            int xx = abs(x-x1);
            int yy = abs(y-y1);
            if(xx * xx + yy * yy <= r * r){
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}
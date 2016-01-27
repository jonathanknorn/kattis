//
// Created by Jonathan Knorn on 16-01-26.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int m;
        double x = 0,y = 0,ang = 0;
        cin >> m;
        for(int j = 0; j < m; ++j){
            double rot, dist;
            cin >> rot >> dist;
            ang += rot;
            x += dist * sin(-ang*M_PI/180.0);
            y += dist * cos(-ang*M_PI/180.0);
        }
        cout << setprecision(7) << x << " " << y << endl;
    }
    return 0;
}
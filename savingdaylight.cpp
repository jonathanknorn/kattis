//
// Created by Jonathan Knorn on 16-02-17.
//

#include <iostream>

using namespace std;

int main(){
    //June 22 2005 6:24 20:37
    string m,d,y;
    int hs,ms,he,me;
    char c;
    while(cin >> m >> d >> y >> hs >> c >> ms >> he >> c >> me){
        int hour, min;
        hour=0;
        min=me-ms;
        if(min < 0){
            --hour;
            min += 60;
        }
        hour += he-hs;
        if(hour < 0){
            hour += 24;
        }
        cout << m << " " << d << " " << y << " " << hour << " hours " << min << " minutes" << endl;
    }
}
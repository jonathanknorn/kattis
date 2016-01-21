//
// Created by Jonathan Knorn on 16-01-18.
//

#include <iostream>

using namespace std;

int main(){
    int w,l;
    cin >> w >> l;
    while(w != 0 && l != 0){
        int n;
        int rX = 0;
        int rY = 0;
        int x = 0;
        int y = 0;
        cin >> n;
        for(int i = 0; i < n; ++i){
            char c;
            int m;
            cin >> c >> m;
            switch(c){
                case 'u':
                    y += m;
                    rY = rY + m < l ? rY + m : l-1;
                    break;
                case 'd':
                    y -= m;
                    rY = rY - m >= 0 ? rY - m : 0;
                    break;
                case 'r':
                    x += m;
                    rX = rX + m < w ? rX + m : w-1;
                    break;
                case 'l':
                    x -= m;
                    rX = rX - m >= 0 ? rX - m : 0;
                    break;
                default:
                    break;
            }
        }
        cout << "Robot thinks " << x << " " << y << endl;
        cout << "Actually at " << rX << " " << rY << endl << endl;
        cin >> w >> l;
    }
    return 0;
}
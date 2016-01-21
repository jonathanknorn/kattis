//
// Created by Jonathan Knorn on 16-01-18.
//

#include <iostream>

using namespace std;

int main(){
    int width;
    cin >> width;
    while(width != 0){
        int max_width = 0;
        int current_width = 0;
        int max_height = 0;
        int total_height = 0;

        int w,h;
        cin >> w >> h;
        while(w != -1 && h != -1){
            if(current_width + w <= width){
                current_width += w;
                max_height = h > max_height ? h : max_height;
            } else {
                max_width = current_width > max_width ? current_width : max_width;
                current_width = w;
                total_height += max_height;
                max_height = h;
            }

            cin >> w >> h;
        }
        max_width = current_width > max_width ? current_width : max_width;
        total_height += max_height;

        cout << max_width << " x " << total_height << endl;
        cin >> width;
    }
    return 0;
}
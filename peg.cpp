//
// Created by Jonathan Knorn on 16-01-13.
//

#include <iostream>

using namespace std;

int main(){
    int m[7][7];
    for(int i = 0; i < 7; ++i){
        for(int j = 0; j < 7; ++j){
            if((i < 2 && (j < 2 || j > 4)) || (i > 4 && (j < 2 || j > 4))){
                m[i][j] = -1;
            } else {
                char c;
                cin >> c;
                m[i][j] = c == 'o' ? 1 : 0;
            }
        }
    }

    int moves = 0;

    for(int i = 0; i < 7; ++i){
        for(int j = 0; j < 7; ++j) {
            if(j < 5 && m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 0){
                ++moves;
            } else if(j < 5 && m[i][j] == 0 && m[i][j+1] == 1 && m[i][j+2] == 1){
                ++moves;
            }
            if(i < 5 && m[i][j] == 1 && m[i+1][j] == 1 && m[i+2][j] == 0){
                ++moves;
            } else if(i < 5 && m[i][j] == 0 && m[i+1][j] == 1 && m[i+2][j] == 1){
                ++moves;
            }
        }
    }

    cout << moves << endl;

    return 0;
}
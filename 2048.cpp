//
// Created by Jonathan Knorn on 2015-10-09.
//

#include <iostream>

using namespace std;

int in[4][4];

void rotate(int times){
    while(times--) {
        for (int i = 0; i < 2; ++i) {
            int a = i, b = i, c = 3 - i, d = 3 - i;
            for (int j = 0; j < 3 - 2 * i; ++j) {
                int start = in[a][b];
                in[a][b] = in[b][c];
                in[b][c] = in[c][d];
                in[c][d] = in[d][a];
                in[d][a] = start;
                ++b;
                --d;
            }
        }
    }
}

int main(){
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            cin >> in[i][j];
        }
    }
    int d;
    cin >> d;

    rotate(d);

    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j) {
            for(int k = j+1; k < 4; ++k) {
                if (in[i][k] == 0) {
                    //Do nothing, move on
                } else if (in[i][j] == in[i][k]) { //same value, merge
                    in[i][j] *= 2;
                    in[i][k] = 0;
                    break;
                } else if (in[i][j] == 0) { //zero, move to the left
                    in[i][j] = in[i][k];
                    in[i][k] = 0;
                } else if (k != j + 1) { //
                    in[i][j + 1] = in[i][k]; //Not same, zero in between, move left
                    in[i][k] = 0;
                    break;
                } else {
                    break;
                }
            }
        }
    }

    rotate((4-d)%4);

    for(int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << in[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//
// Created by Jonathan Knorn on 16-03-01.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int board[8][8] = {};

        char x;
        int y;
        cin >> x >> y;
        board[8-y][x-'a'] = 1;
        int remaining = 63;
        int max = 1;
        while(remaining > 0){
            for(int i = 0; i < 8; ++i){
                for(int j = 0; j < 8; ++j){
                    if(board[i][j] == max){
                        int im2 = i - 2;
                        int im1 = i - 1;
                        int ip1 = i + 1;
                        int ip2 = i + 2;

                        int jm2 = j - 2;
                        int jm1 = j - 1;
                        int jp1 = j + 1;
                        int jp2 = j + 2;

                        if(im2 >= 0 && jm1 >= 0 && board[im2][jm1] == 0){
                            board[im2][jm1] = max+1;
                            --remaining;
                        }
                        if(im2 >= 0 && jp1 < 8 && board[im2][jp1] == 0){
                            board[im2][jp1] = max+1;
                            --remaining;
                        }
                        if(ip2 < 8 && jm1 >= 0 && board[ip2][jm1] == 0){
                            board[ip2][jm1] = max+1;
                            --remaining;
                        }
                        if(ip2 < 8 && jp1 < 8 && board[ip2][jp1] == 0){
                            board[ip2][jp1] = max+1;
                            --remaining;
                        }

                        if(im1 >= 0 && jm2 >= 0 && board[im1][jm2] == 0){
                            board[im1][jm2] = max+1;
                            --remaining;
                        }
                        if(ip1 < 8 && jm2 >= 0 && board[ip1][jm2] == 0){
                            board[ip1][jm2] = max+1;
                            --remaining;
                        }

                        if(im1 >= 0 && jp2 < 8 && board[im1][jp2] == 0){
                            board[im1][jp2] = max+1;
                            --remaining;
                        }
                        if(ip1 < 8 && jp2 < 8 && board[ip1][jp2] == 0){
                            board[ip1][jp2] = max+1;
                            --remaining;
                        }
                    }
                }
            }
            ++max;
        }
        cout << max-1;
        for(int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if(board[i][j] == max){
                    cout << " " << static_cast<char>('a'+j) << 8-i;
                }
            }
        }
        cout << endl;
    }
}
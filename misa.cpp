//
// Created by Jonathan Knorn on 16-02-24.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int r,s;
    vector<string> v;
    cin >> r >> s;
    for(int i = 0; i < r; ++i){
        string str;
        cin >> str;
        v.push_back(str);
    }
    int h = 0;
    int max = 0;
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < s; ++j){
            if(v[i][j] == 'o'){
                if(i > 0 && v[i-1][j] == 'o'){
                    ++h;
                }
                if(i > 0 && j+1 < s && v[i-1][j+1] == 'o'){
                    ++h;
                }
                if(j+1 < s && v[i][j+1] == 'o'){
                    ++h;
                }
                if(i+1 < r && j+1 < s && v[i+1][j+1] == 'o'){
                    ++h;
                }
            } else {
                int seat = 0;
                if(i > 0){
                    if(j > 0 && v[i-1][j-1] == 'o'){
                        seat +=  1;
                    }
                    if(v[i-1][j] == 'o'){
                        seat +=  1;
                    }
                    if(j+1 < s && v[i-1][j+1] == 'o'){
                        seat +=  1;
                    }
                }
                if(j > 0 && v[i][j-1] == 'o'){
                    seat +=  1;
                }
                if(j+1 < s && v[i][j+1] == 'o'){
                    seat +=  1;
                }
                if(i+1 < r){
                    if(j > 0 && v[i+1][j-1] == 'o'){
                        seat +=  1;
                    }
                    if(v[i+1][j] == 'o'){
                        seat +=  1;
                    }
                    if(j+1 < s && v[i+1][j+1] == 'o'){
                        seat +=  1;
                    }
                }
                max = seat > max ? seat : max;
            }
        }
    }
    cout << h+max << endl;
}
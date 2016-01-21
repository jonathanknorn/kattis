//
// Created by Jonathan Knorn on 15-09-26.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(6,0);
    vector<int> in(n, 0);
    for(int i = 0; i < n; ++i){
        cin >> in[i];
        ++v[in[i]-1];
    }
    for(int i = 5; i >= 0; --i){
        if(v[i] == 1){
            for(int j = 0; j < n; ++j){
                if(in[j] == i+1){
                    cout << j+1;
                }
            }
            return 0;
        }
    }
    cout << "none";
    return 0;
}
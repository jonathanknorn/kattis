//
// Created by Jonathan Knorn on 15-09-26.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n = -1;
    int k = 0;
    while(n != 0){
        cin >> n;
        vector<string> v(n, "");
        for(int i = 0; i < n; ++i){
            string s;
            cin >> s;
            int index;
            if(i%2 == 0){
                index = i/2;
            } else {
                index = n-1-((i-1)/2);
            }
            v[index] = s;
        }
        for(int i = 0; i < n; ++i){
            if(i == 0){
                cout << "SET " << ++k << endl;
            }
            cout << v[i] << endl;
        }
    }
    return 0;
}

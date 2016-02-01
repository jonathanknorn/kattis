//
// Created by Jonathan Knorn on 16-01-31.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        vector<char> v;
        int size = ceil(sqrt(s.size()));

        for(auto it = s.begin(); it != s.end(); ++it){
            v.push_back(*it);
        }

        for(int i = s.size(); i < size*size; ++i){
            v.push_back('*');
        }

        auto it = v.begin();
        for(int i = 0; i< size; ++i){
            for(int j = size-1; j >= 0; --j){
                char c = *(it+j*size+i);
                if(c != '*'){
                    cout << c;
                }
            }
        }
        cout << endl;
    }
}
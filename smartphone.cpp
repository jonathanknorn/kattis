//
// Created by Jonathan Knorn on 16-01-26.
//

#include <iostream>
#include <string>

using namespace std;

int diff(string aim, string s){
    auto aim_it = aim.begin();
    auto s_it = s.begin();
    int sum = 0;
    int c = 0;
    while (*aim_it == *s_it && (aim_it != aim.end() || s_it != s.end())){
        ++aim_it;
        ++s_it;
        ++c;
    }
    sum += s.size()-c;
    sum += aim.size()-c;
    return sum;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string aim, wr, s1,s2,s3;
        cin >> aim >> wr >> s1 >> s2 >> s3;
        int a = diff(aim, wr);
        int b = 1 + diff(aim, s1);
        int c = 1 + diff(aim, s2);
        int d = 1 + diff(aim, s3);
        int ab = a < b ? a : b;
        int cd = c < d ? c : d;
        int min = ab < cd ? ab : cd;
        cout << min << endl;
    }
}
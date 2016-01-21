#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<char, bool> m;
    string s;
    getline(cin, s);
    int n = stoi(s);
    for(int i = 0; i < n; ++i){
        for(char c = 'a'; c != '{'; ++c){
            m[c] = true;
        }
        string ans = "";
        getline(cin, s);
        for(auto it = s.begin(); it != s.end(); ++it){
            char c = *it;
            if(c >= 65 && c <= 90){
                c += 'a' - 'A';
            }
            if(c >= 97 && c <= 122){
                m[c] = false;
            }
        }
        for(char c = 'a'; c != '{'; ++c){
            if(m[c]){
                ans += c;
            }
        }
        if(ans.length() > 0){
            cout << "missing " << ans << endl;
        } else {
            cout << "pangram" << endl;
        }
    }
    return 0;
}
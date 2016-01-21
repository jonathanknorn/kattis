//
// Created by Jonathan Knorn on 16-01-13.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;
map<char, string> m = {{'A',".-"},
                       {'B',"-..."},
                       {'C',"-.-."},
                       {'D',"-.."},
                       {'E',"."},
                       {'F',"..-."},
                       {'G',"--."},
                       {'H',"...."},
                       {'I',".."},
                       {'J',".---"},
                       {'K',"-.-"},
                       {'L',".-.."},
                       {'M',"--"},
                       {'N',"-."},
                       {'O',"---"},
                       {'P',".--."},
                       {'Q',"--.-"},
                       {'R',".-."},
                       {'S',"..."},
                       {'T',"-"},
                       {'U',"..-"},
                       {'V',"...-"},
                       {'W',".--"},
                       {'X',"-..-"},
                       {'Y',"-.--"},
                       {'Z',"--.."},
                       {'_',"..--"},
                       {',',".-.-"},
                       {'.',"---."},
                       {'?',"----"}};

map<string, char> a = {{".-",'A'},
                       {"-...",'B'},
                       {"-.-.",'C'},
                       {"-..",'D'},
                       {".",'E'},
                       {"..-.",'F'},
                       {"--.",'G'},
                       {"....",'H'},
                       {"..",'I'},
                       {".---",'J'},
                       {"-.-",'K'},
                       {".-..",'L'},
                       {"--",'M'},
                       {"-.",'N'},
                       {"---",'O'},
                       {".--.",'P'},
                       {"--.-",'Q'},
                       {".-.",'R'},
                       {"...",'S'},
                       {"-",'T'},
                       {"..-",'U'},
                       {"...-",'V'},
                       {".--",'W'},
                       {"-..-",'X'},
                       {"-.--",'Y'},
                       {"--..",'Z'},
                       {"..--",'_'},
                       {".-.-",','},
                       {"---.",'.'},
                       {"----",'?'}};
int main(){
    string s;
    while(getline(cin,s)){
        string l;
        string ans;
        for(auto it = s.begin(); it != s.end(); ++it){
            string morse = m[*it];
            ans += morse;
            l += to_string(morse.size());
        }
        l = string(l.rbegin(), l.rend());
        int start = 0;
        for(auto it = l.begin(); it != l.end(); ++it){
            int i = (*it)-'0';
            cout << a[ans.substr(start,i)];
            start +=i;
        }
        cout << endl;
    }
    return 0;
}

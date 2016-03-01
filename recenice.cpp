//
// Created by Jonathan Knorn on 16-03-01.
//

#include <iostream>
#include <map>

using namespace std;

map<int, string> names = {{1,"one"},
                          {2,"two"},
                          {3,"three"},
                          {4,"four"},
                          {5,"five"},
                          {6,"six"},
                          {7,"seven"},
                          {8,"eight"},
                          {9,"nine"},
                          {10,"ten"},
                          {11,"eleven"},
                          {12,"twelve"},
                          {13,"thirteen"},
                          {14,"fourteen"},
                          {15,"fifteen"},
                          {16,"sixteen"},
                          {17,"seventeen"},
                          {18,"eighteen"},
                          {19,"nineteen"},
                          {20,"twenty"},
                          {30,"thirty"},
                          {40,"forty"},
                          {50,"fifty"},
                          {60,"sixty"},
                          {70,"seventy"},
                          {80,"eighty"},
                          {90,"ninety"},
                          {100,"onehundred"},
                          {200,"twohundred"},
                          {300,"threehundred"},
                          {400,"fourhundred"},
                          {500,"fivehundred"},
                          {600,"sixhundred"},
                          {700,"sevenhundred"},
                          {800,"eighthundred"},
                          {900,"ninehundred"}
};

int main(){

    map<int, int> m;
    for(int i = 1; i < 1000; ++i){          //Build word from number
        string ans = "";
        int h = i / 100;
        h *= 100;
        int t = i - h;
        if(names.find(h) != names.end()){
            ans += names[h];
        }
        if(names.find(t) != names.end()){
            ans += names[t];
        } else {
            ans += names[10 * (t/10)];
            ans += names[t%10];
        }
                                            //'names' stores the word-version of the number
        names[i] = ans;                     //names[971] = ninehundredseventyone

        int pos = i-ans.size();             //pos is the number minus it's length
                                            //ex: 917 - 21 = 896

        if(m.find(pos) == m.end()){         //if no lower number for the same sentece length exist
            m[pos] = i;                     //m[896] = 917
        }
    }

    int n;
    cin >> n;
    string ans = "";
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        ans += s + " ";
    }
    int length = ans.size() - n - 1;            //The length of the sentence excluding the number
    auto pos = ans.find('$');
    ans.replace(pos, 1, names[m[length]]);      //replace the '$' with the number
    ans.pop_back();                             //remove the trailing space
    cout << ans << endl;
}
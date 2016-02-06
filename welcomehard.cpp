//
// Created by Jonathan Knorn on 16-02-06.
//


#include <iostream>
#include <string>

using namespace std;

const string goal = "welcome to code jam";

void dynamic(int **v, int rows, int cols, string s)
{
    for (int i = rows-1; i >= 0; --i)
    {
        for (int j = cols- 1; j >= 0; --j){
            int ans = 0;
            if(s[j] == goal[i]){
                if(i < rows-1 && j < cols-1) {
                    ans += v[i + 1][j + 1];
                } else if(i==rows-1){
                    ans += 1;
                }
            }
            if(j < cols-1){
                ans += v[i][j + 1];
            }
            v[i][j] = ans % 10000;
        }
    }
}

int main(){
    int t;
    cin >> t;
    string s;
    getline(cin, s); // flush input
    for(int i = 0; i < t; ++i){
        getline(cin, s);

        int** v = new int*[goal.size()];
        for(int i = 0; i < goal.size(); ++i) {
            v[i] = new int[s.size()];
            for(int j = 0; j < s.size(); ++j){
                v[i][j] = 0;
            }
        }

        dynamic(v, goal.size(), s.size(), s);

        string ans = to_string(v[0][0] % 10000);
        while(ans.size() < 4){
            ans = "0" + ans;
        }

        cout << "Case #" << i+1 << ": " << ans << endl;
    }
    return 0;
}
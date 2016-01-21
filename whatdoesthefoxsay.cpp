//
// Created by Jonathan Knorn on 16-01-17.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    getline(cin,s); //flush cin
    for(int i = 0; i < n; ++i){
        getline(cin,s);
        stringstream strstr(s);
        string word;
        vector<string> c;
        set<string> words;
        for (int i = 0; strstr >> word; ++i)
        {
            c.push_back(word);
            words.insert(word);
        }

        cin >> word;
        while(word.compare("what") != 0){
            cin >> word; // "goes"
            cin >> word;
            words.erase(word);

            cin >> word;
        }
        getline(cin,word); //flush cin

        for(auto it = c.begin(); it != c.end(); ++it){
            if(words.find(*it) != words.end()){
                cout << *it << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
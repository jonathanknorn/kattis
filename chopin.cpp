//
// Created by Jonathan Knorn on 16-02-19.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, string> m = {{"A#","Bb"}, {"Bb","A#"}, {"C#","Db"}, {"Db","C#"}, {"D#","Eb"}, {"Eb","D#"}, {"F#","Gb"}, {"Gb","F#"}, {"G#","Ab"}, {"Ab","G#"}};
    string note, tonality;
    for(int i = 1; cin >> note >> tonality; ++i){
        cout << "Case " << i << ": ";
        if(m.find(note) != m.end()){
            cout << m[note] << " " << tonality << endl;
        } else {
            cout << "UNIQUE" << endl;
        }
    }
    return 0;
}
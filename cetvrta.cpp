//
// Created by Jonathan Knorn on 16-03-13.
//

#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;
    for(int i = 0; i < 6; ++i){
        int xy;
        cin >> xy;
        if(i % 2 != 0){ //y-coordinate
            xy += 1000; //Add 1000 to separate x and y coordinates
        }

        if(s.find(xy) != s.end()){   //If one value exists twice, erase it
            s.erase(xy);
        } else {
            s.insert(xy);            //else add it to the set
        }
    }
    auto it = s.begin();
    cout << *it << " ";             //First value is the x-coordinate since set is sorted and y = y + 1000
    ++it;
    cout << *it - 1000 << endl;     //Thus, second value is the y-coordinate
    return 0;
}
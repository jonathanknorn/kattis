//
// Created by Jonathan Knorn on 16-02-12.
//

#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n, m;
    while(cin >> n >> m){

        vector<int> v;                  //possible picks

        vector<bool> numbers(n,false);  //result for each number

        for(int i = 0; i < m; ++i){
            int j;
            cin >> j;
            v.push_back(j);
            numbers[j-1] = true;        //mark all 'ending-positions' as wins (the numbers which gives the player the victory)
        }
        for(auto it = numbers.begin(); it != numbers.end(); ++it){      //For each number
            if(!(*it)){                                                 //If not possible to win from that position
                for(auto it2 = v.begin(); it2 != v.end(); ++it2){       //Mark all positions that can put a player here as wins
                    if(it + *it2 < numbers.end()){                      //(number + each of the possible picks)
                    auto pos = *(it + *it2);
                    pos = true;
                    }
                }
            }
        }
       if(numbers[n-1]){                                                //The value of the starting number determines who wins
           cout << "Stan wins" << endl;
       } else {
           cout << "Ollie wins" << endl;
       }
    }
    return 0;
}
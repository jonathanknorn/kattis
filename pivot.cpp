//
// Created by Jonathan Knorn on 16-03-10.
//

#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    long m;
    set<long> s; //Set with pivot-candidates

    cin >> n;
    cin >> m;
    --n;
    long max = m;   //Maximum of processed numbers
    s.insert(m);
    while(n--){
        cin >> m;

        if(m > max){        //If number is larger than current maximum, it's a candidate for a pivot
            s.insert(m);
            max = m;
        } else {            //If number is smaller than current max, iterate pivot-candidates and remove those larger than the current number


            auto it = s.begin();
            while(it != s.end()){
                if(*it > m){
                    it = s.erase(it);
                } else {
                    ++it;
                }
            }
        }
    }
    cout << s.size() << endl;   //Print size of candidate-set
    return 0;
}
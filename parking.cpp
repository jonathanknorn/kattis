//
// Created by Jonathan Knorn on 16-01-29.
//

#include <iostream>

using namespace std;

int main(){
    int price[4];
    price[0] = 0;
    cin >> price[1] >> price[2] >> price[3];

    int arrival[3], departure[3];
    int sum = 0;

    cin >> arrival[0] >> departure[0];
    cin >> arrival[1] >> departure[1];
    cin >> arrival[2] >> departure[2];

    for(int i = 0; i <  100; ++i){
        int cars = 0;
        for(int j = 0; j < 3; ++j){
            cars += i >= arrival[j] && i < departure[j] ? 1 : 0;
        }
        sum += cars * price[cars];
    }
    cout << sum << endl;
    return 0;
}
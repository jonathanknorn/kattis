//
// Created by Jonathan Knorn on 15-09-29.
//

#include <iostream>

using namespace std;

int main(){
    int start[4];
    int end[4];

    int a, b;
    for(int i = 0; i < 4; ++i){
        cin >> start[i];
        cin >> end[i];
    }
    double result[2];
    for(int i = 0; i < 4; ++i){
        double sum = 0.0;
        double k = 0.0;
        for(int j = start[i]; j <= end[i]; ++j){
            sum += j;
            ++k;
        }
        result[i/2]+= sum / k;
    }

    if(result[1] > result[0]){
        cout << "Emma";
    } else if(result[1] < result[0]){
        cout << "Gunnar";
    } else {
        cout << "Tie";
    }
    return 0;
}
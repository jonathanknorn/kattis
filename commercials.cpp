//
// Created by Jonathan Knorn on 16-01-30.
//

#include <iostream>

using namespace std;

int main(){
    long n, p;
    cin >> n >> p;
    long max_ending_here = 0, max_so_far = 0;
    while(n--){
        long m;
        cin >> m;
        m -= p;
        max_ending_here = m > m + max_ending_here ? m : m + max_ending_here;
        max_so_far = max_ending_here > max_so_far ? max_ending_here : max_so_far;
    }
    cout << max_so_far << endl;
    return 0;
}
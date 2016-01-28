//
// Created by Jonathan Knorn on 16-01-28.
//

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){
    int n;
    string a, b;
    cin >> n >> a >> b;
    if(n%2 == 0){
        if(a.compare(b) == 0){
            cout << "Deletion succeeded" << endl;
        } else {
            cout << "Deletion failed" << endl;
        }
    } else {
        auto it_a = a.begin();
        auto it_b = b.begin();
        while(it_a != a.end()){
            int aa = *it_a - '0';
            int bb = *it_b - '0';
            if(aa+bb != 1){
                cout << "Deletion failed" << endl;
                break;
            }
            ++it_a;
            ++it_b;
        }
        if(it_a == a.end()){
            cout << "Deletion succeeded" << endl;
        }
    }
    return 0;
}
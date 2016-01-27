//
// Created by Jonathan Knorn on 16-01-27.
//

#include <iostream>


using namespace std;

int main(){
    int a,b,c,d;
    int case_num = 1;
    while(cin >> a >> b >> c >> d){
        int div = a*d-b*c;
        cout << "Case " << case_num << ":" << endl;
        cout << d/div << " " << -b/div << endl;
        cout << -c/div << " " << a/div << endl;
        ++case_num;
    }
    return 0;
}
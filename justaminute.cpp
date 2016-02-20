//
// Created by Jonathan Knorn on 16-02-20.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double m_sum = 0, s_sum = 0;
    while (n--){
        double m, s;
        cin >> m >> s;
        m_sum += m*60;
        s_sum += s;
    }
    double minute = s_sum / m_sum;
    if(minute > 1) {
        cout << setprecision(10) << minute << endl;
    } else {
        cout << "measurement error\n";
    }
    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const string line = "+----------+----------+";
const string  XY = "|    X     |     Y    |";

double f(double x);
int main() {   
    cout << line << endl;
    cout << XY << endl;
    cout << line << endl;
    for(double i = -2; i <= 2; i += 0.5){
        cout.precision(3);
        cout << fixed << left << "|" << right << setw(10) << i << "|" << setw(10) << f(i) << right << "|" << endl;
    }
    cout << line << endl;
    return 0; 
}

double f(double x){
    return -2.4 * x * x + 5 * x - 3; 
}

// должен быть вот такой вот красивый вывод:
// +----------+----------+
// |    X     |     Y    |
// +----------+----------+
// |    -2.000|   -22.600|
// |    -1.500|   -15.900|
// |    -1.000|   -10.400|
// |    -0.500|    -6.100|
// |     0.000|    -3.000|
// |     0.500|    -1.100|
// |     1.000|    -0.400|
// |     1.500|    -0.900|
// |     2.000|    -2.600|
// +----------+----------+

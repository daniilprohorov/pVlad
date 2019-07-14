#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {   
    double prev, now = 0;
    int n = 0;
    double d;
    double lastNumber = 1;
    cout << "Введите точность : ";
    cin >> d;
    do {
        prev = now;
        now = prev + pow(-1, n)*(1.0 / lastNumber);
        n++;
        lastNumber += 2;
    } while (4*abs(now - prev) > d);
    cout << "Число ПИ ~= " << 4*now; 
    return 0; 
}


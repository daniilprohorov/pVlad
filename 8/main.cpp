#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {   
    double s = 0;
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int x = rand() % 100;
        cout << x << " ";  
        s += x;
    }
    cout << endl << "Среднее арифметическое = " << s / n << endl;
    return 0; 
}


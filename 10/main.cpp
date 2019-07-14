#include <iostream>
#include <limits>
using namespace std;

constexpr double lowest = numeric_limits<double>::lowest();
const int n = 10;

int main() {   
    double array[n]; 
    double max = lowest;
    cout << "Введите " << n << " чисел в массив :" << endl;
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    // хз вообще зачем нам массив,
    // когда у нас ввод с клавиатуры, 
    // но ладно, пусть будет бесполезный массив)) 
    for(int i = 0; i < n; i++){
        if (array[i] > max)
            max = array[i];
    }
    cout << "Максимальный элемент массива = " << max;

    return 0; 
}




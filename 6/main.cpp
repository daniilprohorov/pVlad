#include <iostream>
//#include <iomanip>
using namespace std;



int GCD(int a, int b);
int main() {   
    int a, b;
    cout << "Введите первое число : "; 
    cin >> a; 	
    cout << "Введите второе число : "; 
    cin >> b; 	
    cout << GCD(a, b)  << endl;
    return 0; 
}

// циклы для лохов,
// функции для пацанов! 
int GCD(int a, int b) {
    if ( a == 0 || b == 0 ){
        return (a + b);
    }
    else {
	    if ( a > b )
		    return GCD(b, a % b);
	    else
		    return GCD(a, b % a);	 
    }
}

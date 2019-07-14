#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f( double a, double b, double x );
double tg( double a );
int main() 
{   
    double a, b, x;
    cout << "Введите a : "; 
    cin >> a; 	
    cout << "Введите b : "; 
    cin >> b; 	
    cout << "Введите x : "; 
    cin >> x; 	
    cout << "z = " << f(a, b, x) << setprecision(5) << endl;
    return 0; 
}

double f( double a, double b, double x )
{
	if( x <= a)
		return sin(x);
	else if ( a < x < b )
		return cos(x);
	else
		return tg(x);
}

double tg( double a )
{
	return sin(a) / cos(a);
}

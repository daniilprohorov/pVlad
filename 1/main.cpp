#include <iostream>
using namespace std;

string compare( int a, int b);
int main() 
{   
    int a, b;
    cout << "Введите первое число : "; 
    cin >> a; 	
    cout << "Введите второе число : "; 
    cin >> b; 	
    cout << a << compare(a, b) << b << endl;
    return 0; 
}


string compare( int a, int b)
{
	if (a > b)
	{
		return " > ";
	}
	else if (a < b)
	{
		return " < ";
	}
	else
	{
		return " = ";
	}
}

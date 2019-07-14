#include <iostream>
//#include <iomanip>
using namespace std;



long factorial(long n);
int main() 
{   
    long n;
    cout << "Факториал числа : "; 
    cin >> n; 	
    cout << factorial(n)  << endl;
    return 0; 
}

long factorial(long n)
{
	if( n == 0 ){
		return 1;
	}
	return n*factorial(n-1); 

}


#include <iostream>
#include <iomanip>
using namespace std;



double _rowSum(int n, double res);
double rowSum(int n);
int main() 
{   
    int n;
    cout << "Введите количество членов в ряду : "; 
    cin >> n; 	
    cout << rowSum(n) << setprecision(5) << endl;
    return 0; 
}

// тут если что хвостовая рекурсия,
// норм тема! (ФП сила, ООП могила!! ) 
double _rowSum(int n, double res)
{
	if( n == 0 ){
		return res;
	}
	return _rowSum(n-1, res + 1.0/n); 

}

double rowSum(int n)
{
	return _rowSum(n, 0);
}

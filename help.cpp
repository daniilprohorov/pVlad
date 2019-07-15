#include <iostream>

using namespace std;

// C++ компилируемый язык программирования со статической типизацией
// Существуют типы данных:
// Тип без значения: void = () 
// Логический:      bool = true | false     ; 1 байт
// Символы:         char =   -128 .. 127    ; 1 байт
// Целочисленный:  short = –32768 .. 32767  ; 2 байтa
//                 int   = ну тут понятно   ; 2 | 4 байтa
//                 long  = ну тут понятно   ; 4 байтa
//            long long  = ну тут понятно   ; 8 байтa
// Вещественный:  float  = лень писать      ; 4 байтa
//               double  = лень писать      ; 8 байтa
//
// Есть также добавочки как signed unsigned, соответственно
// число со знаком или без, т.е:
// unsigned char = 0 .. 255
// signed   char = -128 .. 127

// объявление переменных:

// bool       a;
// char       b;
// short      c;
// int        d; 
// long       e;
// long long  f;
// float      g;
// double     h;

// и в них будет мусор

// чтобы не было мусора присваивайте значение: 

bool       a = true;
char       b = 'b';
short      c = 0;
int        d = 0; 
long       e = 0;
long long  f = 0;
float      g = 0.0; // 0, 0. , .0
double     h = 0.0;

// указатели
// ну они указывают ( логично ), на то что Влад не знает С++ ( логично ^2 ) 

void pointers(){
    int x = 10;
    int *p; // это указатель, объявляется с помощью *
    p = &x; // & берет адрес, по которому хранится переменная x
    // теперь p == x
    cout << "До: " << endl;
    cout << "x = " << x << endl;   // x = 10
    cout << "p = " << p << endl;   // p = 0x7ffe808bc16c (адрес) 
    cout << "*p = " << *p << endl; // *p = 10
    // операция * называется операцией разыменования ( получаем доступ к ячейке по адресу
    *p = 11; // изменяем в ячейке число с 10 на 11
    cout << "После: " << endl;
    cout << "x = " << x << endl;   // x = 11 ( тоже изменилось ) 
    cout << "p = " << p << endl;   // p = 0x7ffe808bc16c
    cout << "*p = " << *p << endl; // *p = 11
}


// массивы 

// основная функция ( точка входа в программу )
int main(){

    cout << 1 / 10   << endl; // выведет 0, т.к. 1 это int, и деление будет как div
    cout << 1.0 / 10 << endl; // будет 0.1, т.к. 1.0 тут уже double
    cout << 1. / 10  << endl; // будет 0.1, т.к. 1.  тут уже double
    cout << .1 / 10  << endl; // будет 0.01, т.к. .1 ( это 0.1) тоже double 

    pointers();

    return 0;
}

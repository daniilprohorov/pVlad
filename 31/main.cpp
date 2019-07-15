#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>
using namespace std;



class Point {
    protected:
        // вот она и инкапсуляция, переменные в этом классе есть
        // но доступа у нас к ним как бы напрямую нет:
        // Point p;
        // p.x  - так вот мы сделать не можем, потому что переменные
        // protected. 
        // Бывает 3 режима доступа:
        // public - можем иметь прямой доступ откуда угодно
        // private - имеют доступ только методы ( функции ) внутри класса
        // protected - тоже что и private, только при наследовании также есть доступ, в отличии от private
        double x;
        double y;
    public:
        // для доступа к переменным внутри класса пишем сеттеры и геттеры:
        // чтобы можно было и записать переменную и прочитать 
        void setX( double valX) {
            x = valX;
        }
        void setY( double valY) {
            y = valY;
        }
        void setXY( double valX, double valY) {
            x = valX;
            y = valY;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }

};
// наследуем класс круг от класса точка
class Circle : public Point {
    protected:
        double r;
    public:
        // каждый класс имеет свой конструктор ( используется для инициализации ), 
        // может иметь также параметры какие-то, 
        // допустим для начального задания координат, 
        // так вот 
        // тут мы наследуем или вызываем конструктор Point, которую мы наследовали,
        // я не гуру всего это, я вообще в ФП шарю, так что вот надо так, делать, 
        // а дальше я не особо знаю как, что и почему, но все работает))
        Circle() : Point(){}
        void setR( double valR) {
            r = valR;
        }
        double getR(){
            return r;
        }
        double getL(){
            return 2.0 * 3.1415 * r;
        }
        double getS(){
            return 3.1415 * r * r;
        }
};

// наследуем класс кольцо от класса круг 
class Ring : public Circle {
    protected:
        // ну и тут, так как у нас кольцо, то используем два экземпляра класса круг, и потом уже делаем там другие вычисления с ними
        // класс - это как чертеж, или тип
        // экземпляр - это как деталь, или значение типа
        // класс один, а экземпляров может быть много
        Circle c1;
        Circle c2;
    public:
        Ring() : Circle(){}

        double getX() {
            return c1.getX();
        }
        double getY() {
            return c1.getY();
        }
        void setX( double valX) {
            c1.setX(valX);
        }
        void setY( double valY) {
            c1.setY(valY);
        }
        void setR1( double valR1) {
            c1.setR(valR1);
        }
        void setR2( double valR2) {
            c2.setR(valR2);
        }
        double getR1(){
            return c1.getR();
        }
        double getR2(){
            return c2.getR();
        }
        double getL1(){
            return c1.getL();
        }
        double getL2(){
            return c2.getL();
        }
        double getS(){
            return abs(c2.getS() - c1.getS());
        }
};
int main() {   

    // создаем переменную P типа Point
    Point P;
    // Задаем координаты
    P.setX(10.0);
    P.setY(10.0);
    // да и в общем то и все
    cout << "Point" << endl;
    cout << " x = " << P.getX() << endl;
    cout << " y = " << P.getY() << endl;
    
    // Создаем переменую C типа Circle
    Circle C;
    // задаем координаты и радиус
    C.setX(10.0);
    C.setY(12.0);
    C.setR(11.0);
    cout << "Circle" << endl;
    // выводим координаты и радиус
    cout << " x = " << C.getX() << endl;
    cout << " y = " << C.getY() << endl;
    cout << " r = " << C.getR() << endl;
    // выводим длину окружности круга
    cout << " l = " << C.getL() << endl;
    // выводим площадь круга
    cout << " s = " << C.getS() << endl;
    
    // Создаем переменную R типа Ring
    Ring R;
    // Задаем координаты, внутренний и внешний радиус 
    R.setX(10.0);
    R.setY(12.0);
    R.setR1(11.0);
    R.setR2(12.0);
    // выводим все подряд, включая площадь кольца
    cout << "Ring" << endl;
    cout << " x = " << R.getX() << endl;
    cout << " y = " << R.getY() << endl;
    cout << " r1 = " << R.getR1() << endl;
    cout << " r2 = " << R.getR2() << endl;
    cout << " l1 = " << R.getL1() << endl;
    cout << " l2 = " << R.getL2() << endl;
    cout << " s = " << R.getS() << endl;
    return 0; 
}


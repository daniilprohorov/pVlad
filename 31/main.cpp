#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>
using namespace std;



class Point {
    protected:
        double x;
        double y;
    public:
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

    Point P;
    P.setX(10.0);
    P.setY(10.0);
    cout << "Point" << endl;
    cout << " x = " << P.getX() << endl;
    cout << " y = " << P.getY() << endl;

    Circle C;
    C.setX(10.0);
    C.setY(12.0);
    C.setR(11.0);
    cout << "Circle" << endl;
    cout << " x = " << C.getX() << endl;
    cout << " y = " << C.getY() << endl;
    cout << " r = " << C.getR() << endl;
    cout << " l = " << C.getL() << endl;
    cout << " s = " << C.getS() << endl;

    Ring R;
    R.setX(10.0);
    R.setY(12.0);
    R.setR1(11.0);
    R.setR2(12.0);
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


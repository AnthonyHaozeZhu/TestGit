#ifndef LIST_H
#define LIST_H


class Circle
{
private:
    double r;//半径
public:
    Circle();//构造函数
    Circle(double R);//构造函数
    double Area();//求面积函数
};

Circle::Circle() {
    this -> r = 1;
}

Circle::Circle(double R) {
    this -> r = R;
}

double Circle::Area() {
    return 3.14 * r * r;
}
#endif
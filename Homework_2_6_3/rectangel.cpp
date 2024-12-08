#include "rectangle.h"

Rectangle::Rectangle(int a, int b) : Quadriangle(a, b, a, b, 90, 90, 90, 90) {};
void Rectangle::getSide()
{
    std::cout << "Прямоугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
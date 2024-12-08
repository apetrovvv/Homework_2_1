#include "square.h"

Square::Square(int a) : Quadriangle(a, a, a, a, 90, 90, 90, 90) {};
void Square::getSide()
{
    std::cout << "Квадрат:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
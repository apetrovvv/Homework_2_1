#include "equilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
void EquilateralTriangle::getSide()
{
    std::cout << "Равносторонний треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
};
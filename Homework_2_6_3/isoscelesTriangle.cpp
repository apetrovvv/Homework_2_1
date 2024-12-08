#include "isoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b,
                                     int A, int B) : Triangle(a, b, a, A, B, A) {};
void IsoscelesTriangle::getSide()
{
    std::cout << "Равнобедренный треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
}
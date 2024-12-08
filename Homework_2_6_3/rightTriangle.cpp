#include "rightTriangle.h"

RightTriangle::RightTriangle(int a, int b, int c, 
            int A, int B) : Triangle(a, b, c, A, B, 90){};
            
void RightTriangle::getSide()
{
    std::cout << "Прямоугольный треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
}
#include "rhombus.h"

Rhombus::Rhombus(int a, int A, int B) : Quadriangle(a, a, a, a, A, B, A, B) {};
void Rhombus::getSide()
{
    std::cout << "Ромб:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
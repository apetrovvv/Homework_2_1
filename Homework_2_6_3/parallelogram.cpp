#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadriangle(a, b, a, b, A, B, A, B) {};

void Parallelogram::getSide()
{
    std::cout << "Параллелограмм:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << std::endl;
}
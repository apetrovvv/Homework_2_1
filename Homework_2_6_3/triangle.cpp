#include "triangle.h"

Triangle::Triangle(int a, int b, int c, 
    int A, int B, int C): Figure(3){
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
}

void Triangle::getSide(){
    std::cout << "Треугольник:" << std::endl;
    std::cout << "Стороны: a="<< this->a <<" b="<< this->b <<" c="<< this->c << std::endl;
    std::cout << "Углы: A="<< this->A <<" B="<< this->B <<" C="<< this->C << std::endl;
}
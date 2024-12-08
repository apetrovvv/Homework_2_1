#include "figure.h"
#include "triangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "equilateralTriangle.h"
#include "quadriangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

void printInfo(Figure* figure){
    figure->getSide();
    std::cout << std::endl;
}

int main(){
    Triangle triangle(10, 20, 30, 50, 60, 90);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10,20,50,60);
    EquilateralTriangle equilateralTriangle(30);
    Quadriangle quadriangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10,20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30,30,40);

    printInfo(&triangle);
    printInfo(&rightTriangle);
    printInfo(&isoscelesTriangle);
    printInfo(&equilateralTriangle);
    printInfo(&quadriangle);
    printInfo(&square);
    printInfo(&parallelogram);
    printInfo(&rhombus);
}
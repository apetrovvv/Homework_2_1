#include <iostream>
#include "math.h"

int main(){ 
        int x = 0, 
        y = 0,
        oprt = 0;
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "Введите второе число: "; 
    std::cin >> y;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";  
    std::cin >> oprt;
    switch (oprt){
        case 1:
            std::cout << "Сумма чисел " << x << " и " << y << " равна " << sum(x, y) << std::endl;
            break;
        case 2:
            std::cout << "Разность чисел " << x << " и " << y << " равна " << dif(x, y) << std::endl;
            break;
        case 3:
            std::cout << "Произведение чисел " << x << " и " << y << " равно " << mult(x, y) << std::endl;
            break;
        case 4:
            std::cout << "Частное чисел " << x << " и " << y << " равно " << dev(x, y) << std::endl;
            break;
        case 5:
            std::cout << x << " в степени " << y << " равно " << pow(x, y) << std::endl;
            break;
        default:
            std::cout << "Неверный номер опперации" << std::endl;
            break;
   }
}

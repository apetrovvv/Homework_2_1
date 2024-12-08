#include <iostream>
#include "counter.h"

int main(){
    Counter counter;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string answel;
    std::cin >> answel;
    if(answel == "да"){
        int count;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> count;
        counter = Counter(count);
    }
    else {
        counter = Counter();
    }
    char command;
    while(true){
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        switch (command)
        {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            counter.view_counter();
            break;
        case 'x':
            return 0;
        default:
            std::cout << "Неверная команда!" << std::endl;
            break;
        }
    }
}
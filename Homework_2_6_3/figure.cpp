#include "figure.h"

Figure::Figure(int side){
            this->side = side;
        }
        
void Figure::getSide(){
            std::cout << "Фигура: "<< side << std::endl;
}
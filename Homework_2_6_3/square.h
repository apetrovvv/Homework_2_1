#include "quadriangle.h"

class Square: public Quadriangle{
    public:
        Square(int a);
        void getSide() override;
};
#include "quadriangle.h"

class Rhombus: public Quadriangle{
    public:
        Rhombus(int a, int A, int B);
        void getSide() override;
};

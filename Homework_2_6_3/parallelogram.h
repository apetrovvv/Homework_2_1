#include "quadriangle.h"

class Parallelogram: public Quadriangle{
    public:
        Parallelogram(int a, int b, int A, int B);
        void getSide() override;
};
#pragma once
#include <iostream>

class Figure{
    protected:
        int side;
    public:
        Figure(int side = 0);
        virtual void getSide();
};
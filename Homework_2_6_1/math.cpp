#include "math.h"

int sum(int x, int y){
    return x+y;
}

int dif(int x, int y){
    return x-y;
}

int dev(int x, int y){
    return x/y;
}

int pow(int x, int y){
    int result = 1;
    for(int i = 1; i<y+1; i++){
        result*=x;
    }
    return result;
}

int mult(int x, int y){
    return x*y;
}
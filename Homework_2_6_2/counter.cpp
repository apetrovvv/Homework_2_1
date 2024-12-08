#include "counter.h"
#include <iostream>
using namespace std;

Counter::Counter(){
            count = 1;
        }
Counter::Counter(int count){
            this->count = count;
        }
void Counter::increment(){
            this->count++;
        }
void Counter::decrement(){
            this->count--;
        }
void Counter::view_counter(){
            cout << this->count << endl;
        }
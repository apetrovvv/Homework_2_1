#pragma once
class Counter{
    private:
        int count;
    public:
        Counter();
        Counter(int count);
        void increment();
        void decrement();
        void view_counter();
};
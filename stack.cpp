#include <iostream>
#include "stack.hpp"

Stack::Stack() {
    top1 = -1;
    a[size];
}

bool Stack::push (int r) {
    if (top1 > 9)
        return false;

    a[top1 + 1] = r;
    top1++;
    return true;
}
void Stack::pop() {
    top1--;
}








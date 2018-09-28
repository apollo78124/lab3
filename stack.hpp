//
// Created by dldms on 9/27/2018.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#endif //LAB3_STACK_HPP

class Stack {

        private:
            int top1;
            int a[];
            static constexpr int size = 10;
    public:
        Stack();
        bool push (int r);
        void pop();
        int top() const {
            return top1;
        }

        bool empty() const {
            if (top1 <= -1)
                return true;
            return false;
        }

        bool full() const {
            if (top1 > 8)
                return true;
            return false;
        }

        void print() const {
            for (int i = 0; i < 10; i++) {
                std::cout << a[i] << " ";
            }
        }
};

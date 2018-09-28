#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#endif //LAB3_STACK_HPP

// Store int data in a stack.
// PRE : Stack is empty
// POST : int values can be pushed and popped.
class Stack {
        private:
            int top1;
            int a[];
            static constexpr int size = 10;
    public:

        // Constructs the Stack.
        // POST : Set the size of the stack to 10 and set the top index to -1
        Stack();

        // Push the int to the stack
        // PRE : Stack is either full or have space.
        // POST : Increment the top index by 1 and store r into the top.
        bool push (int r);

        // Delete a value from the top of the index.
        // PRE : Stack can be empty or contain values.
        // POST : Decrement top value by 1 which ignore the int value which was on the top.
        void pop();

        // Return the top value.
        // RETURN : Top index of the stack
        int top() const {
            return top1;
        }

        // Return true if the stack is empty.
        // PRE : Stack is either empty or not.
        // POST : Same.
        // RETURN : Boolean. True if the stack is empty, top value is -1
        bool empty() const {
            return top1 <= -1;
        }


        // Return true if the stack is full.
        // PRE : Stack can be either filled or not.
        // POST : Same.
        // RETURN : Boolean. True if the top index is 9.
        bool full() const {
            return top1 > 8;
        }


        // Prints all the values stored in the stack.
        void print() const {
            for (int i = 0; i < 10; i++) {
                std::cout << a[i] << " ";
            }
        }
};

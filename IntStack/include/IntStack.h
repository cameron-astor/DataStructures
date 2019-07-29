#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack
{
    public:
        IntStack();
        ~IntStack();
        IntStack(const IntStack& other);

        bool isEmpty() const;
        int getSize() const;
        void push(int);
        int pop();
        int peek() const;
        void clear();

    private:
        void resize();
        int size_;
        int baseArraySize_;
        int *top_;
        int *data_;
};

#endif // INTSTACK_H

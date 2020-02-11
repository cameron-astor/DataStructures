#ifndef STACK_H
#define STACK_H

template <class T> class Stack
{
    public:
        Stack();
        virtual ~Stack();
        void push(T);
        T pop();

    private:
        unsigned int m_counter;
        unsigned int m_size;
        T *m_array;
};

template <class T> Stack<T>::Stack():m_array(new T[10]), m_size(0), m_counter(0) {

};

template <class T> Stack<T>::~Stack() {
    delete m_array;
};

#endif // STACK_H

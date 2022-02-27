#ifndef MYCLASS_H //ifndef stands for "if not defined".
#define MYCLASS_H


class MyClass
{
    public:
        MyClass(int a, int b);
        ~MyClass();
        void myPrint();
        void myEcho() const;

    protected:

    private:
        int regVar;
        const int constVar;
};

#endif // MYCLASS_H - endif ends the condition.

#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class Birthday
{
    public:
        int day;
        Birthday(int m, int d, int y);
        void printDate();

    protected:

    private:
        int month;
        int year;
};

#endif // BIRTHDAY_H

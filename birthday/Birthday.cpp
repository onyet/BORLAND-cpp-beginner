#include "string"
#include "Birthday.h"
#include "iostream"

using namespace std;

Birthday:: Birthday(int m, int d, int y)
: month(m), day(d), year(y)
{
};

void Birthday::printDate(){
    cout << month << "/" << day << "/" << year << endl;
};

class Person {
public:
    int var;

    Person(string n, Birthday b):name(n), bd(b){
        this->var = bd.day;
    }
    void printInfo()
    {
        cout << name << endl;
        cout << this->name << endl;
        cout << (*this).name << endl;
        bd.printDate();
    }

private:
    string name;
    Birthday bd;

friend void someFunc(Person &obj);

};

void someFunc(Person &obj) {
  obj.name = "Dian Mukti";
  cout << obj.name;
}

int main() {

    Birthday bd(2, 25, 1996), bd2(2, 24, 1996);
    Person p("Dian", bd), p2("Farda", bd2);
    p2.printInfo();
    p.printInfo();
    someFunc(p);

}

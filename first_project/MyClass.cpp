#include "MyClass.h"
#include "iostream"

using namespace std;

MyClass::~MyClass()
{
    cout<<"Destructor"<<endl;
}

void MyClass::myPrint() {
  cout <<"Hello"<<endl;
}

void MyClass::myEcho() const {
  cout <<"Hello Echo Constants"<<endl;
}

MyClass::MyClass(int a, int b): regVar(a), constVar(b)
// The member initialization list may be used for regular variables, and must be used for constant variables.
{
  cout << regVar << endl;
  cout << constVar << endl;
}

int main() {
    MyClass obj(12, 22);
    const MyClass obj2(10, 10);

    MyClass *ptr = &obj;
    const int x = 42; // A constant is an expression with a fixed value

    obj.myPrint();
    ptr->myPrint(); // The arrow member selection operator (->) is used to access an object's members with a pointer.
    obj2.myEcho(); // the constant object just can call constant function

}

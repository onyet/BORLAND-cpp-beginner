#include "iostream"

using namespace std;
//C++ exception handling is built upon three keywords: try, catch, and throw.

int main() {

    try {
        int motherAge = 29;
        int sonAge = 36;

        if (sonAge > motherAge) {
            throw 99;
        }
    } catch (int x) {
        cout<<"Wrong age values - Error "<<x;
    }

    try{
        int num1;
        cout <<"Enter the first number:";
        cin >> num1;

        int num2;
        cout <<"Enter the second number:";
        cin >> num2;

        if(num2 == 0) {
            throw 0;
        }

        cout <<"Result:"<<num1 / num2;
    } catch(int x) {
        cout <<"Division by zero!";
    }

}

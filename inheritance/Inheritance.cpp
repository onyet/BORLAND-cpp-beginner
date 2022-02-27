#include "iostream"

using namespace std;
class Mother
{
    public:
        Mother() {
            cout <<"Mother ctor"<<endl;
        }
        ~Mother(){
            cout <<"Mother dtor"<<endl;
        }
        void sayHi(){
            cout << "Hi";
        }

    private:


    protected:
        int someVar;

};

class Daughter:public Mother {

    public:
        Daughter(){
            cout <<"Daughter ctor"<<endl;
        }
        ~Daughter(){
            cout <<"Daughter dtor"<<endl;
        }

};

int main() {

    Mother m;
    Daughter d;
    d.sayHi();

}

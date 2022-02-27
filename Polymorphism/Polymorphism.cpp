#include "iostream"

using namespace std;
// satu bentuk fungsi banyak implementasi
class Enemy {
    protected:
        int attackPower;

    public:
        void setAttackPower(int a){
            attackPower = a;
        }
        //virtual void attack(){
        //    cout << "Enemy!"<<endl;
        //}
        //ini conoth pure virtual
        virtual void attack() = 0;
};

class Ninja: public Enemy {
    public:
        void attack(){
            cout << "Ninja! - "<<attackPower<<endl;
        }
};

class Monster: public Enemy {
    public:
        void attack(){
            cout << "Monster! - "<<attackPower<<endl;
        }
};

// ------ main function
int main() {
    Ninja n;
    Monster m;
    //Enemy e;

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    //Enemy *e3 = &e;

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    e1->attack();
    e2->attack();
    //e3->attack();
     //n.attack();
     //m.attack();
}

//polymorphism
//In c ++ using a pointer to a memory location does not supersede the original data at that memory location
//using virual functions helps to solve this problem
// virtual functions are useful when dealing with inheritance.
//  For example if a base class defines a function called attack we can redefine that same function in a derived class


#include <iostream>

using namespace std;

class Enemy{


    private:
            int attackPower;
    public: 
            Enemy();
            void setAttackPower(int powerIn);
            int  getAttackPower();
            ~Enemy();
};


class Ninja: public Enemy{

    // public:
    //     void attack()

};

class Monster: public Enemy{

    // public:
    //     void attack()

};

//constructor class funciton is called automatically when new instance of a class is creted
Enemy::Enemy(){

    attackPower = 0;
}

// destructor class function is called automatically when object is out of scope
Enemy::~Enemy(){

    cout<<"Releasing resources\n";
}

void Enemy::setAttackPower(int powerIn){

    attackPower = powerIn;
}

int Enemy::getAttackPower(){
    return attackPower;
}

int main(){
Enemy *e1;

e1   = new Ninja;
e1 = new Monster;

//cout<<enemy.attackPower<<"\n";
cout<<e1.attackPower<<"\n";

    return 0;
}
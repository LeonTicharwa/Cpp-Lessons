//polymorphism


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

Enemy::Enemy(){

    attackPower = 999;
}

void Enemy::setAttackPower(int powerIn){

    attackPower = powerIn
}
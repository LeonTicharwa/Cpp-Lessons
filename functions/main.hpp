#include<iostream>

int product = 0;
int returnProduct(int a, int b);
void printProduct(int a, int b);

using namespace std;

void printProduct(int a, int b){

    product = a * b;    
    cout<<"The product of "<<a<<" and "<<b<<" is "<<product<<"\n";
}

int returnProduct(int a, int b){
    
    product = a * b;
    return product;
}
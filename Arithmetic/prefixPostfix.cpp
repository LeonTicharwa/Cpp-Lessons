

#include <iostream>

using namespace std;

int main(){

int a, b      = 0;
int post, pre = 0;


    // incrementing
    // ++a --> prefix    (increment the value then return a reference)
    // a++ --> postfix   (create a copy of the variable and then increment the value then return the copied value from before the increment)
    cout<<"Initial values: \t\t\t\t\t\tpost = "<<post<<" pre = "<<pre<<"\n";
    post = a++;
    pre  = ++b;
    cout<<"After 1st post-fix and prefix increments: \t\t\tpost = "<<post<<" pre = "<<pre<<"\n";
    post = a++;
    pre  = ++b; 
    cout<<"After 2nd post-fix and prefix increments: \t\t\tpost = "<<post<<" pre = "<<pre<<"\n";
    // decrementing
    // --a --> prefix
    // a++ --> postfix
}
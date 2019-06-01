//Pointers, which are the addresses of variables, can be accessed in C++

#include <iostream>

using namespace std;

int main(){

 // this is an integer variable with value = 54
int a = 54;
//this is a pointer that holds the address of the variable 'a'
int * pointerToA = &a;
cout <<"a = "<<a<<"\n";
// If we were to print pointerToA, we'd obtain the address of 'a':
cout<<"Address of a is at &a="<< pointerToA<<"\n";
cout<<"Address of a is at &a="<< &a<<"\n";
//dereferencing a pointer
// if we have a pointer and want to access the value stored in that address? That process is called dereferencing
//it is indicated by adding the operator * before the variable's name
// This same operator should be used to declare a variable that is meant to store a pointer
cout<<"pointerToA points to "<< * pointerToA << '\n';

}
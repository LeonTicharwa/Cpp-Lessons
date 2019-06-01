

//Passing by reference refers to passing the address of the variable rather than the variable itself
//When we make a change in a fucntion we are changing the value at the address not the variable
//Once the value is changed at its address any access to that address will retrieve the new value
//The change is essentially available outside the scope of the modification

#include<iostream>

void increment(int &input);
using namespace std;
int main(){

int a = 34;
cout<<"Before the function call a = "<<a<<"\n";
increment(a);
cout<<"After function call a = "<<a<<"\n";

}

void increment(int &input){
input++;
cout<<"In the function call a = "<<input<<"\n";

}


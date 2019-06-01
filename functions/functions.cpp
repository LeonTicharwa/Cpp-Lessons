//All c++ funcions except for the main function must have the following:
// - A declaration: A statement of how to call the function
// - A definition : A statement of the task the function performs when called
//C++ functions cam
// - Accept parameters but are not required
// - Return values but a return values is not required
// - Can modify parameters if given explicit directection to do so
// function syntax
//  retVariableType functionName(par1, par2, ..., parN)
//  {
//        statements(s);   
//  }

#include "main.hpp"
int sel;

int main(){

cout<<"1. printProduct 2. returnProduct \t";
cin >> sel;

switch(sel){

    case(1): printProduct(3, 9);
                    break;
    case(2): cout<<"Product returned is "<<returnProduct(3, 100)<<"\n";
                    break;
    default: cout<<"invalid selection\n";
                    break;
}    

}


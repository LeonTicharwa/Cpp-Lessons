
//C++ respects variable scope, changes made to a variable in a function will not affect the variable in the main part of the program
//  - to rectify this issue we can return the altered variable or pass the variable as a reference


#include<iostream>

int increment(int input);
int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    a = increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
int increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
    return input;
}
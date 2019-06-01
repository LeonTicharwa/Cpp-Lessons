
#include <iostream>


using namespace std; 
int main(){

    int menuItem = 2;
    
    cout<<"Wich continent are you form?\n";
    cout<<"1.Africa 2.Asia 3.Americas 4.Australia 5.Europe 6.Antarctica\n";
    
    
    switch(menuItem)
    {
        case(1): cout<<"Wow do you have a pet Lion?\n";
                break;
        case(2): cout<<"Wow cool, where in Asia are you from?\n";
                break;
        case(3): cout<<"Soo cool dude\n";
                break;
        case(4): cout<<"Chuck another shrimp on the barbie matey\n";
                break;
        case(5): cout<<"Long live the queen\n ";
                break;
        case(6): cout<<"hmm interesting\n";
                break;
        default: cout<<"go home you are drunk\n";

    }

    return 0;

}
/*Goal: sort students by multiple data vaule
**
**student1: Name: Joe Lime, ID#15, Grad. Date: 2019
**student2: Name: Bob Green, ID#3, Grad. Date: 2020
**student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
**student4: Name: Annie Blue, ID#10, Grad. Date: 2020
**student5: Name: Jose Lemon, ID#25, Grad. Date: 2016

*/

#include "student.hpp"
#include "constructorClass.hpp"

int main(){

Student student1;
Fighters fighter1;


    student1.setName("Leon Ticharwa"); //assign a value to the student name
    student1.setId(17764351); //assign a value to the student id number
    student1.setGradDate(2019); //assign a value to the student grad date
    cout<<student1.getName()<<"\n";
    cout<<student1.getId()<<"\n";
    cout<<student1.getGradDate()<<"\n";
    cout<< "Without  setting fighter details the default values kick in\n";
    cout<<fighter1.getName()<<"\n";
    cout<<fighter1.getPowerLevel()<<"\n";
    cout<<fighter1.getUniverse()<<"\n";
    cout<< "After  setting fighter details \n";
    fighter1.setName("Broly");
    fighter1.setUniverse("7");
    fighter1.setPowerLevel(1300000000);
    cout<<fighter1.getName()<<"\n";
    cout<<fighter1.getPowerLevel()<<"\n";
    cout<<fighter1.getUniverse()<<"\n"; 
    

}
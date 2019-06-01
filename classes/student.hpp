#include <iostream>

using namespace std;


class Student{

    string name;
    int id;
    int gradDate;

    public:
        //Mutators
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        //get Data
        string getName();
        int getId();
        int getGradDate();
        void print();

};

//Now lets define the modifying function members

void Student::setName(string nameIn){

    name = nameIn;
}

void Student::setId(int idIn ){

    id  = idIn;
    
}

void Student::setGradDate(int dateIn){

    gradDate = dateIn;
}

//Let's define the accessing function members
string Student::getName(){
  
    return name;
}

int Student::getId(){

    return id;
}

int Student::getGradDate(){
    return gradDate;
}
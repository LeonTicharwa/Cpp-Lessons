/*
####################################Constructors#################################################################
A constructor is special function that is executed whenever we create a new instance of the class.
 It is used to set initial values of data members of the class. 

Declaration of a constructor is <ClassName>::<ClassName>();

Definition of a constructor 
ClassName::ClassName()
{
     dataMemberName1 = value;
     dataMemberName2 = value;
     ...
}
####################################Destructors#################################################################

Destructors are special class functions that are called whenever an object goes out of scope. Just like a constructor, a destructor is called automatically.
Destructors cannot:
   - return a value
   - accept parameters
Destructors must have the same name as the class 
 
The syntax for a destructor is similar to the constructor:
The destructor is identified with a tilda (~) symbol.

Declaring a destructor:
~className()  //this is a destructor


Defining a destructor:

classname::~classname()
{
     //tasks to be completed before going out of scope
}
*/


class Fighters{
public:
    Fighters();  // this is a  class function declaration of a constructor
    void setName(string nameIn);
    void setPowerLevel(int levelIn);
    void setUniverse(string universeIn);
    int  getPowerLevel();
    string getUniverse();
    string getName();
    ~Fighters();

private:
    string name;
    int powerLevel;
    string universe;
};

//define the constructor 
//// this is a  class function definition of a constructor
Fighters::Fighters(){ 
name       = "unknown";
powerLevel = 0;
universe   = "unknown";
}

Fighters::~Fighters(){
cout<<"Deleting the fighter\n";

}

void Fighters::setName(string nameIn){
name = nameIn;
}

void Fighters::setUniverse(string universeIn){
universe = universeIn;
}

void Fighters::setPowerLevel(int levelIn){
powerLevel = levelIn;
}

int Fighters::getPowerLevel(){
    return powerLevel;
}

string Fighters::getName(){
    return name;
}

string Fighters::getUniverse(){
    return universe;
}
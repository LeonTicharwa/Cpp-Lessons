// C++ does not allow arrays to be passed to functions but it does allow pointers to be passed
// There are three methods for passing an array by reference to a function
//     - void functionName(variableType * arrayName)
//     - void functionName(variableType arrayName[length of array])
//     - void functionName(variableType arrayName[])

//When creating functions there is a precaution that is often considered a best practice
//When passing variables that are not going to be modified in the function, define the variable as a const so that it ca't be changed by the function-

#include<iostream>
#include<iomanip>

using namespace std;
//Pass the array as a pointer
void arrayAsPointer(int *array, int size);
//pass the array as a sized array
void arraySized(int array[3], int size);
//pass the array as an unsized array
void arrayUnSized(int array[], int size);

int main(){


    const int size  = 3;
    int array[size] = {33, 55, 78};
    //We are passing a pointer or reference to the array
    //so we will not know the size of the array
    //We have to pass the size to the function as well
    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnSized(array, size);
    return 0;
}

void arrayAsPointer(int *array, int size){
 std::cout<<std::setw(5);
for(int i = 0; i < size; i++){
    cout<<array[i]<<" ";
}
 cout<<"\n";
}

void arraySized(int array[3], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<array[i]<<" ";
    std::cout<<"\n";  
}

void arrayUnSized(int array[], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<array[i]<<" ";
    std::cout<<"\n";  
}
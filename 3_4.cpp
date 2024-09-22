#include <iostream>
using namespace std;

class Class_B; //Declared B cuz its in class A

class Class_A 
{
    public: 
        int valA;
        Class_A(int val) : valA(val) 
        {   
        }
};

class Class_B 
{
    public:
        int valB;
        Class_B(int val) : valB(val) 
        {
        }
};

void swap_values(Class_A &a, Class_B &b);

int main() 
{
    Class_A objA(10); 
    Class_B objB(20); 

    // Before swap
    cout << "Before swapping: " << endl;
    cout << "Value in Class_A: " << objA.valA << endl; 
    cout << "Value in Class_B: " << objB.valB << endl; 

    swap_values(objA, objB);

    // After swap
    cout << "After swapping: " << endl;
    cout << "Value in Class_A: " << objA.valA << endl;
    cout << "Value in Class_B: " << objB.valB << endl; 

    return 0;
}

void swap_values(Class_A &a, Class_B &b)
{
    int temp = a.valA;
    a.valA = b.valB; 
    b.valB = temp;  
}

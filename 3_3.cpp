#include <iostream>
using namespace std;

int num = 10; // Global variable

class Sample 
{
    private:
        int classNum;  // Class-level variable

    public: // Constructor to initialize class-level variable
        Sample(int obj_input) 
        {
            classNum = obj_input;  
        }
        void display();
};


void Sample::display()  //defining display function for the class Sample using scope resolution operator
{
    int localNum = 30;  // Local variable
    cout << "Local variable num: " << localNum << endl;           // Accessing local variable
    cout << "Class variable num: " << classNum << endl;          // Accessing class' variable
    cout << "Global variable num: " << ::num << endl;            // Accessing global variable using scope resolution operator
}

int main() {
    Sample obj(20);  // obj_input variable initialized to 20
    obj.display();   // Call display function
    return 0;
}

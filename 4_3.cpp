/* 
I couldn't really understand this so this is an Chat-GPT answer
I hate pointers :)
*/


#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Display function called." << endl;
    }

    void show() {
        cout << "Show function called." << endl;
    }
};

int main() {
    MyClass obj; // Create an object of MyClass
    MyClass* ptrObj = &obj; // Pointer to the object

    // Pointer to member function
    void (MyClass::*ptrFunc)(); // Declare a pointer to a member function

    // Assign the member function to the pointer
    ptrFunc = &MyClass::display; // Point to the display function

    // Call the member function using the pointer to the object and the pointer to the member function
    (ptrObj->*ptrFunc)(); // Calls obj.display()

    // Change the pointer to point to another member function
    ptrFunc = &MyClass::show; // Point to the show function

    // Call the next member function
    (ptrObj->*ptrFunc)(); // Calls obj.show()

    return 0;
}

/*
Output Example:

Display function called.
Show function called.
*/

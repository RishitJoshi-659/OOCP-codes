#include<iostream>
using namespace std;

// Function declarations
int area(int s);                 // Square function, no default argument
int area(int l, int b);          // Rectangle function with a default value for b

int main()
{
    cout << "Area of square is " << area(10) << endl;                       // Calls square function
    cout << "Area of rectangle is " << area(25, 5) << endl;                 // Calls rectangle function with both l and b
    cout << "Area of rectangle with default b is " << area(25) << endl;     // Calls rectangle with default b
}

// Function definitions
int area(int s) // For square
{
    return s * s;
}

int area(int l, int b = 15) // For rectangle with default b
{
    return l * b;
}

/*
Output Example: 

Area of square is 100
Area of rectangle is 125
Area of rectangle with default b is 375
*/

#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double breadth;

    public:
        Rectangle(double l, double b) 
        {
            this->length = l; //using this pointer to assign values
            this->breadth = b;
        }

        double area() 
        {
            return this->length * this->breadth; //using this pointer to calculate area
        }
};

int main() 
{
    Rectangle obj_rect(5.0, 3.0);
    cout << "Area: " << obj_rect.area() << endl;

    return 0;
}

/*
Output Example:

Area: 15
*/

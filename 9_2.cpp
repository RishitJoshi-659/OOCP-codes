//GPT code modified by me

#include <iostream>

using namespace std;

class Coord 
{
    private:
        int x, y;

    public:
        // Constructor to initialize coordinates
        Coord(int xVal = 0, int yVal = 0) : x(xVal), y(yVal) {}

        // Display the current coordinates
        void display() const 
        {
            cout << "Coordinates: (" << x << ", " << y << ")\n";
        }

        // Prefix ++ operator
        Coord& operator++() 
        {
            ++x;
            ++y;
            return *this;
        }

        // Postfix ++ operator
        Coord operator++(int) 
        {
            Coord temp = *this;
            x++;
            y++;
            return temp;
        }

        // Prefix -- operator
        Coord& operator--() 
        {
            --x;
            --y;
            return *this;
        }

        // Postfix -- operator
        Coord operator--(int) 
        {
            Coord temp = *this;
            x--;
            y--;
            return temp;
        }
};

int main() 
{
    int x, y;

    // Input initial coordinates
    cout << "Enter initial x and y coordinates: ";
    cin >> x >> y;

    Coord point(x, y);

    // Display original coordinates
    cout << "Original ";
    point.display();

    // Demonstrate prefix increment
    cout << "\nApplying prefix ++\n";
    ++point;
    point.display();

    // Demonstrate postfix increment
    cout << "\nApplying postfix ++\n";
    point++;
    point.display();

    // Demonstrate prefix decrement
    cout << "\nApplying prefix --\n";
    --point;
    point.display();

    // Demonstrate postfix decrement
    cout << "\nApplying postfix --\n";
    point--;
    point.display();

    return 0;
}

/*
Output Example:

Enter initial x and y coordinates: 3 4
Original Coordinates: (3, 4)

Applying prefix ++
Coordinates: (4, 5)

Applying postfix ++
Coordinates: (5, 6)

Applying prefix --
Coordinates: (4, 5)

Applying postfix --
Coordinates: (3, 4)

*/

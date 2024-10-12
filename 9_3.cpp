#include <iostream>
using namespace std;

// Class declaration
class Paise;

// Class Defination
class Rupees 
{
    private:
        double rupees;

    public:
        Rupees(double amount) : rupees(amount) {} // Constructor to store amount

        double get_amount() const 
        {
            return rupees;
        }

    operator Paise(); // Conversion operator declaration
};

class Paise 
{
    private:
        double paise;

    public:
        Paise(double amount) : paise(amount) {}  // Constructor to store amount

        double get_amount() const   
        {
            return paise;
        }

    operator Rupees(); // Conversion operator declaration
};

// Conversion Rupees to Paise
Rupees::operator Paise()        
{
    return Paise(rupees * 100); // Converting rupees to paise
}

// Conversion Paise to Rupees
Paise::operator Rupees() 
{
    return Rupees(paise / 100); // Converting paise to rupees
}

int main() 
{
    int a;
    double amount;

    cout << "Select Conversion Method:\n1: Rupees -> Paise\n2: Paise -> Rupees\n\n";
    cin >> a;

    //Switch case is for better user expirience here but not necessary, u can do it all just remove sswitch case and type everything insde it

    switch (a) 
    {
        case 1:
        {
            cout << "Rupees -> Paise Selected:\n";
            cout << "Enter your Rupee amount: ";
            cin >> amount;

            Rupees rupees(amount); 
            Paise paise = rupees; 
            cout << "Converted Amount: " << paise.get_amount() << " paise" << endl;
            break;
        }

        case 2:
        {
            cout << "Paise -> Rupees Selected:\n";
            cout << "Enter your Paise amount: ";
            cin >> amount;

            Paise paise(amount);
            Rupees rupees = paise;
            cout << "Converted Amount: " << rupees.get_amount() << " rupees" << endl;
            break;
        }

        default:
            cout << "Invalid Input\n";
            return 1;
    }

    return 0;
}

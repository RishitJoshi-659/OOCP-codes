#include <iostream>
using namespace std;

// Class declaration
class Farenheit;

// Class Defination
class Celcius 
{
    private:
        double celcius_temperature;

    public:
        Celcius(double temperature) : celcius_temperature(temperature) {} // Constructor to store temperature

        double get_amount() const 
        {
            return celcius_temperature;
        }

    operator Farenheit(); // Conversion operator declaration
};

class Farenheit 
{
    private:
        double farenheit_temperature;

    public:
        Farenheit(double temperature) : farenheit_temperature(temperature) {}  // Constructor to store temperature

        double get_amount() const   
        {
            return farenheit_temperature;
        }

    operator Celcius(); // Conversion operator declaration
};

// Conversion Celcius to Farenheit
Celcius::operator Farenheit()        
{   
    float result = (9 * (celcius_temperature) / 5) + 32;
    return Farenheit(result); // Converting celcius_temperature to farenheit_temperature
}

// Conversion Farenheit to Celcius
Farenheit::operator Celcius() 
{
    float result = ((farenheit_temperature - 32) * 5) / 9;
    return Celcius(result); // Converting farenheit_temperature to celcius_temperature
}

int main() 
{
    int a;
    double temperature;

    cout << "Select Conversion Method:\n1: Celcius -> Farenheit\n2: Farenheit -> Celcius\n\n";
    cin >> a;

    //Switch case is for better user expirience here but not necessary, u can do it all just remove sswitch case and type everything insde it

    switch (a) 
    {
        case 1:
        {
            cout << "Celcius -> Farenheit Selected:\n";
            cout << "Enter your Celcius temperature: ";
            cin >> temperature;

            Celcius celcius_temperature(temperature); 
            Farenheit farenheit_temperature = celcius_temperature; 
            cout << "Converted Amount: " << farenheit_temperature.get_amount() << " farenheit_temperature" << endl;
            break;
        }

        case 2:
        {
            cout << "Farenheit -> Celcius Selected:\n";
            cout << "Enter your Farenheit temperature: ";
            cin >> temperature;

            Farenheit farenheit_temperature(temperature);
            Celcius celcius_temperature = farenheit_temperature;
            cout << "Converted Amount: " << celcius_temperature.get_amount() << " celcius_temperature" << endl;
            break;
        }

        default:
            cout << "Invalid Input\n";
            return 1;
    }

    return 0;
}

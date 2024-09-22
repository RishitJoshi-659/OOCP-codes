#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int get_power(double m, int n = 2); // value of n is defaulted to 2
int main()
{
    double m;
    int n;

    cout << "Enter Value of M: ";
    cin >> m;
    cout << "Enter the Value of M's power N: ";
    cin >> n;

    cout << get_power(m, n) << endl; // When arguments taken
    cout << get_power(m) << endl; //when argument for n ommited (should get squared)


    
    return 0;
}

// Function to obtain power
int get_power(double m, int n)
{
    return pow(m, n); //part of math.h library
}
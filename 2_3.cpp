#include <iostream>
using namespace std;

int temp;


int &reference_return (int &x, int &y);

int main()
{
    int a, b;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b; 
    int &sum = reference_return(a, b);
    cout << "Sum of a and b is " << sum;
    return 0;
}


// Function returns the sum as a return by reference
int &reference_return(int &x, int &y)
{
    temp = x + y;
    return temp;
}

/*
Output Example:

Enter Value of a: 10
Enter Value of b: 25
Sum of a and b is 35
*/

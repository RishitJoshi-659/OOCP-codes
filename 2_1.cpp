#include<iostream>
using namespace std;

//functions are declared
int area(int);
int area(int, int);
float area(float);


int main()
{
    int s,l,b;
    float r;

    cout << "Enter the length of Square's side: ";
    cin >> s;

    cout << "Enter the Rectange's length: ";
    cin >> l;
    cout << "Enter the Rectange's Breadth: ";
    cin >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "\nArea of square is " << area(s) << endl;
    cout << "Area of rectangle is " << area(l, b) << endl;
    cout << "Area of circle is " << area(r) << endl;
}


//functions are defined
int area(int s)
{
    return(s * s);
}

int area(int l, int b)
{
    return(l * b);
}

float area(float r)
{
    return(3.14 * r * r);
}

/*

Output Example:

Enter the length of Square's side: 5
Enter the Rectange's length: 10
Enter the Rectange's Breadth: 5
Enter radius of circle: 10

Area of square is 25
Area of rectangle is 50
Area of circle is 314

*/

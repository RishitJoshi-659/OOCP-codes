#include <iostream>
using namespace std;

class B;
class C;

class A
{
    private:
        int a;
    public:

        void getA()
        {
            cout << "Enter Value of A: ";
            cin >> a;
        }
        friend float average(A objA, B objB, C objC); //friend function between A and B
};

class B
{
    private:
        int b;
    public: 

        void getB()
        {
            cout << "Enter Value of B: ";
            cin >> b;
        }
        friend float average(A objA, B objB, C objC); //friend function between A and B
};

class C
{
    private:
        int c;
    public: 

        void getC()
        {
            cout << "Enter Value of C: ";
            cin >> c;
        }
        friend float average(A objA, B objB, C objC); //friend function between A and B
};

float average(A objA, B objB, C objC)
{
    return (objA.a + objB.b + objC.c)/3;
}

int main()
{
    A objA;
    B objB;
    C objC;

    objA.getA();
    objB.getB();
    objC.getC();

    float result = average(objA, objB, objC);

    cout << "The Average Value is: " << result << endl;

    return 0;
}
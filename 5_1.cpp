#include <iostream>
using namespace std;

class B;

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
        friend int compare(A objA, B objB); //friend function between A and B
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
        friend int compare(A objA, B objB); //friend function between A and B
};

int compare(A objA, B objB)
{
    if(objA.a > objB.b)
    {
        return objA.a;
    }
    else // if its equal the max number is the same no matter what u print so eh!
    {
        return objB.b;
    }
}

int main()
{
    A objA;
    B objB;

    objA.getA();
    objB.getB();

    int result = compare(objA, objB);

    cout << "The Maximum Value is: " << result << endl;

    return 0;
}
#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
    protected:

    int id;
    string name;
    int salary;

    public:
    Employee()
    {
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary per hour: ";
        cin >> salary;
    }
};

class Male_Employee : public Employee
{
    private:

    int days;
    int hrs;


    public: 

    void compute_pay()
    {
        cout << "Enter the number of days worked: ";
        cin >> days;
        cout << "Enter the number of hours worked per day: ";
        cin >> hrs;

        int Msalary = salary * (days * hrs);
        cout << "Male Employee earned " << Msalary << " Rupees" << endl;
    }


};

class Female_Employee : public Employee
{
    private:

    int wage_hrs;
    public: 
    void compute_pay()
        {
        int Fsalary = 0;
        cout << "Hours Worked: ";
        cin >> wage_hrs;

        if (wage_hrs <= 40)
        {
            Fsalary = wage_hrs * salary;
        }
        else
        {
            cout << "Salary will be counted till 40 hrs only" << endl << endl;
            Fsalary = salary * 40;
        }
        cout << "Female Employee earned " << Fsalary << " Rupees" << endl;
    }
};

int main()
{
    Male_Employee m1;
    m1.compute_pay();
    cout << endl;
    Female_Employee f1;
    f1.compute_pay();
    return 0;
}

/*
Output Example:

Enter Id: 2345
Enter Name: Zhongli
Enter Salary per hour: 1000
Enter the number of days worked: 28
Enter the number of hours worked per day: 6
Male Employee earned 168000 Rupees

Enter Id: 4522 
Enter Name: Fischl
Enter Salary per hour: 1200
Hours Worked: 43
Salary will be counted till 40 hrs only

Female Employee earned 48000 Rupees
*/

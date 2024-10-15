#include<iostream>
#include<string>
using namespace std;

class Student 
{
    private:
        int rollNo;
        string name;
        int science, math, english, cpp, dbms;
        int total;

    public:
        // Function to accept values of data members
        void get_details() 
        {
            cout << "Enter Name: ";
            getline(cin, name);
            
            cout << "Enter Roll No: ";
            cin >> rollNo;
            
            cout << "Enter marks for Science: ";
            cin >> science;
            cout << "Enter marks for Mathematics: ";
            cin >> math;
            cout << "Enter marks for English: ";
            cin >> english;
            cout << "Enter marks for C++: ";
            cin >> cpp;
            cout << "Enter marks for DBMS: ";
            cin >> dbms;
        }

        // Function to calculate and store total marks
        void calculate_total() 
        {
            total = science + math + english + cpp + dbms;
        }

        // Function to display details of the student
        void display_details() const 
        {
            cout << "Name: " << name << endl;
            cout << endl << "Student Roll No: " << rollNo << endl << endl;
            cout << "Marks:" << endl;
            cout << "Science: " << science << endl;
            cout << "Mathematics: " << math << endl;
            cout << "English: " << english << endl;
            cout << "C++: " << cpp << endl;
            cout << "DBMS: " << dbms << endl;
            cout << "Total Marks: " << total << endl;
        }
};

int main() {
    // Create an object of the Student class
    Student obj_stu;

    // Get student details
    obj_stu.get_details();

    // Calculate total marks
    obj_stu.calculate_total();

    // Display student details and total marks
    obj_stu.display_details();

    return 0;
}

/*
Output Example:

Enter Name: Rishit Joshi
Enter Roll No: 659
Enter marks for Science: 85
Enter marks for Mathematics: 92
Enter marks for English: 76
Enter marks for C++: 89
Enter marks for DBMS: 81

Name: Rishit Joshi
Student Roll No: 659

Marks:
Science: 85
Mathematics: 92
English: 76
C++: 89
DBMS: 81
Total: 423
*/

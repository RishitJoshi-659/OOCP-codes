#include <iostream>
#include <string>
using namespace std;

//class declaration
class Customer;

// class defination
class Scheme
{
    private: 
        int scheme_id;
        string scheme_name;
        float outgoing_rate;
        float message_charge;
        
    public:
        
        void get_details()
        {
            
            cout << "Enter Scheme Name: ";
            getline(cin, scheme_name); //to get string with spaces
            
            
            cout << "Enter Scheme ID: ";
            cin >> scheme_id;
            
            
            cout << "Enter Outgoing Rate: ";
            cin >> outgoing_rate;
            
            cout << "Enter Message Rate: ";
            cin >> message_charge;
            
            cout << endl;
        }
        
        void display_details()
        {
            cout << "Scheme Details:" << endl << endl;
            
            cout << "Scheme Name: " << scheme_name << endl << "Scheme ID: " << scheme_id << endl;
        }
        
        void display_call_details()
        {
            cout << "Outgoing Rate: " << outgoing_rate << endl;
        }
        
        void display_message_details()
        {
            cout << "Message Charge: " << message_charge << endl;
        }

};

class Customer : private Scheme
{
    private:
        int customer_id;
        string mobile_no;
        string customer_name;
    
    public: 
        
        void get_details()
        {
            Scheme :: get_details();
            
            cin.ignore();
            
            cout << "Enter Customer Name: ";
            getline(cin, customer_name);
            
            cout << "Enter Customer ID: ";
            cin >> customer_id;
            
            cin.ignore();
            cout << "Enter Customer Mobile Number: ";
            getline(cin, mobile_no);
            
            cout << endl;
        }
        
        void display_details()
        {
            cout << "Customer Details: " << endl << endl;
            
            cout << "Name: " << customer_name << endl << "ID: " << customer_id << endl << "Mobile Number: " << mobile_no << endl << endl;
            
            Scheme :: display_details();
        }
        
        void display_call_details()
        {
            Scheme :: display_call_details();
        }
        
        void display_message_details()
        {
            Scheme :: display_message_details();
        }
};

int main() 
{
    Customer customer;
    int option;
    
    customer.get_details();
    
    cout << "Select Option: " << endl << "1: Call Details\n2: Message Details\n";
    cin >> option;
    switch(option) // used for menu driven program
    {
        case 1:
            customer.display_details();
            customer.display_call_details();
            break;
            
        case 2:

            customer.display_details();
            customer.display_message_details();
            break;
            
        default:
            cout << "Enter Valid Input";
            exit(1);
            break;
    }
    return 0;
}

/*
Output Example:

Enter Scheme Name: Super DEAL
Enter Scheme ID: 1234
Enter Outgoing Rate: 500
Enter Message Rate: 280

Enter Customer Name: Dehya
Enter Customer ID: 13004
Enter Customer Mobile Number: +91 834***34**

Select Option:
1: Call Details
2: Message Details
1
Customer Details:

Name: Dehya
ID: 13004
Mobile Number: +91 834***34**

Scheme Details:

Scheme Name: Super DEAL
Scheme ID: 1234
Outgoing Rate: 500


OR


Enter Scheme Name: Super DEAL
Enter Scheme ID: 1234
Enter Outgoing Rate: 500
Enter Message Rate: 280

Enter Customer Name: Dehya
Enter Customer ID: 13004
Enter Customer Mobile Number: +91 834***34**

Select Option:
1: Call Details
2: Message Details
2
Customer Details:

Name: Dehya
ID: 13004
Mobile Number: +91 834***34**

Scheme Details:

Scheme Name: Super DEAL
Scheme ID: 1234
Message rate: 280
*/

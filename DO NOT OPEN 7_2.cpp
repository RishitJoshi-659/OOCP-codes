//Something took over me while writing this. IT HAS NO BUSINESS BEING THIS BIG!!!!!!!!!!!!!!!

#include <iostream>
#include <string>

using namespace std;

class Account
{
    private: 
        string customer_name;
        int account_no;
    public:

        void get_customer_details()
        {   
            cin.ignore();
            cout << "Enter Customer Name: ";
            getline(cin, customer_name);
            cout << "Enter Account Number: ";
            cin >> account_no;
            cout << endl;
        }

        void show_customer_details()
        {
            cout << "Customer Details: \n\n";
            cout << "Customer Name: " << customer_name << endl << "Account Number: " << account_no << endl;
        }
};

class CurrentAccount : private Account
{
    private:
        double balance;
        double deposit_amt, withdraw_amt;
    
    public: 
        CurrentAccount(double balance = 0) : balance(balance) {}

    void deposit()
    {   
        cout << "How much money (in Rupees) is to be deopsited: ";
        cin >> deposit_amt;

        balance += deposit_amt;
    }

    void withdraw()
    {
        cout << "How much money (in Rupees) is to be withdrawn: ";
        cin >> withdraw_amt;

        if (balance < withdraw_amt)
        {
            cout << "Insufficient Balance";
            exit(11);
        }
        else
        {
            balance -= withdraw_amt;
        }
    }

    void get_customer_details()
    {
        Account :: get_customer_details();
    }

    void show_balance()
    {
        Account :: show_customer_details();
        cout << "Account Type: Current" << endl;

        cout << "Balance: " << balance << " Rs.";
    }

    void account_action()
{
    int option;

    cout << "Select Account Action:" << endl;
    cout << "1: Show Balance\n2: Deposit\n3: Withdraw\n";
    cin >> option;

    switch (option)
    {
        case 1:
            show_balance();
            break;

        case 2:
            deposit();
            break;
        
        case 3:
            withdraw();
            break;
            
        default:
            cout << "Invalid Input";
            exit(1);
            break;
    }
}
};

class SavingsAccount : private Account
{
    private:
        double balance;
        double deposit_amt, withdraw_amt;
    
    public: 
        SavingsAccount(double balance = 0) : balance(balance) {}

    void deposit()
    {
        cout << "How much money (in Rupees) is to be deopsited: ";
        cin >> deposit_amt;

        balance += deposit_amt;
    }

    void withdraw()
    {
        cout << "How much money (in Rupees) is to be withdrawn: ";
        cin >> withdraw_amt;

        if (balance < withdraw_amt)
        {
            cout << "Insufficient Balance";
            exit(11);
        }
        else
        {
            balance -= withdraw_amt;
        }
    }

    void get_customer_details()
    {
        Account :: get_customer_details();
    }

    void show_balance()
    {
        Account :: show_customer_details();
        cout << "Account Type: Savings" << endl;

        cout << "Balance: " << balance << " Rs.";
    }

    void account_action()
{
    int option;

    cout << "Select Account Action:" << endl;
    cout << "1: Show Balance\n2: Deposit\n3: Withdraw\n";
    cin >> option;

    switch (option)
    {
        case 1:
            show_balance();
            break;

        case 2:
            deposit();
            break;
        
        case 3:
            withdraw();
            break;
            
        default:
            cout << "Invalid Input";
            exit(1);
            break;
    }
}
};


void bank_action(CurrentAccount current_acc, SavingsAccount savings_acc);
int main()
{   
    CurrentAccount current_acc;
    SavingsAccount savings_acc;
    bank_action(current_acc, savings_acc);
    return 0;
}

void bank_action(CurrentAccount current_acc, SavingsAccount savings_acc)
{
    int option_main;

    cout << "\n\nWelcome, what would you like to do?\n1: Take Account Action\n2: Exit" << endl;
    cin >> option_main;

    switch (option_main)
    {
    case 1:
        char option;

        cout << "\nSelect Account Type:\na: Current Account\nb: Savings Account\n";
        cin >> option;

        switch(option)
        {
            case 'a': 
                current_acc.get_customer_details();
                current_acc.account_action();
                break;

            case 'b':
                savings_acc.get_customer_details();
                savings_acc.account_action();
                break;

            default:
                cout << "Invalid Input";
                exit(1);
                break;
        }
        bank_action(current_acc, savings_acc);
        break;
    
    default:
        exit(2);
        break;
    }
}


//THIS IS NOT COMPLETE ITS UNDER CONSTRUCTION XD

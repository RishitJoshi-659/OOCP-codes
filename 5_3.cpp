#include <iostream>
using namespace std;

class Currency
{
private:
    int rupees;
    int paisa;

public:
    Currency() : rupees(0), paisa(0) {}

    void get_currency()
    {
        cout << "Enter Rupees to add: ";
        cin >> rupees;
        cout << "Enter Paisa to add: ";
        cin >> paisa;
    }

    int get_rupees() const { return rupees; } //its something called Accessor IDK GPT asked me to add this cuz it wasnt working before
    int get_paisa() const { return paisa; }
    
    friend Currency add_currency(Currency obj1, Currency obj2); //using friend function
};

Currency add_currency(Currency obj1, Currency obj2)
{
    Currency obj_added;
    obj_added.rupees = obj1.rupees + obj2.rupees;
    obj_added.paisa = obj1.paisa + obj2.paisa;

    if (obj_added.paisa >= 100) //to conver any paisa over 100 to rupees
    {
        obj_added.rupees += obj_added.paisa / 100; 
        obj_added.paisa = obj_added.paisa % 100;   
    }

    return obj_added; //returning as object
}

int main()
{
    Currency obj1;
    Currency obj2;
    Currency obj_added;

    obj1.get_currency();
    obj2.get_currency();

    obj_added = add_currency(obj1, obj2);

    cout << "After adding:\n" 
         << "Rupees: " << obj_added.get_rupees() 
         << "\nPaisa: " << obj_added.get_paisa() << endl;

    return 0;
}

/*
Output Example:

Enter Rupees to add: 502
Enter Paisa to add: 234
Enter Rupees to add: 0532
Enter Paisa to add: 234
After adding:
Rupees: 1038
Paisa: 68
*/

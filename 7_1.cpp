#include <iostream>
#include <string>
using namespace std;


// class declaration
class Book;
class Tape;

// class defination
class Publisher
{
    private:
        string name;
        string title;
    
    public: 

        void get_details() //function to get publisher details
        {
            cin.ignore();  //for error handling 
            cout << "Enter publisher's name: ";
            getline(cin, name);  //takes in strings with spaces 

            cout << "Enter title: ";
            getline(cin, title);  //takes in strings with spaces
        }

        void display_details() //function to display publisher details
        {
            cout << endl << "Publisher's Name: " << name << endl << "Title: " << title << endl;
        }
            
};

class Book : private Publisher  //using inheritance to use publisher members in this class
{
    private:
        int pg_no;

    public: 

        void get_details() //function to get book details
        {
            Publisher :: get_details(); //access to getting publisher details
            cout << "Enter number of pages: ";
            cin >> pg_no;
        }

        void display_details()
        {
            Publisher :: display_details(); //access to display publisher details
            cout << "Total Pages: " << pg_no << endl << endl;
        }

};


class Tape : private Publisher  //using inheritance to use publisher members in this class
{
    private:
     int play_time_hours;
     int play_time_mins;
     int play_time_secs;
    
    public:

        void get_details()
        {
            Publisher :: get_details();  //access to getting publisher details
            cout << "Enter the play time hours:mins:secs : ";
            cin >> play_time_hours >> play_time_mins >> play_time_secs;
        }

        void display_details()
        {
            Publisher :: display_details();  //access to display publisher details
            cout << "Total Play Time: " << play_time_hours << "hours " << play_time_mins << "minutes " << play_time_secs << "seconds" << endl << endl;
        }
};


int main()
{
    // This is not a necessary step its for error handling and all, u can simply declare objects and call functions like 'obj.func();'
    int a;
    cout << "What media would you like to chose?" << endl << "1: Book or 2: Tape" << endl << endl;
    cin >> a;

    switch (a)
    {
        case 1:
            Book book1;
            cout << "Book Selected: " << endl;
            book1.get_details();
            book1.display_details();
            break;

        case 2:
            Tape tape1;
            cout << "Tape Selected: " << endl;
            tape1.get_details();
            tape1.display_details();
            break;

        default:
            cout << "Invalid Option Selected"; //for error handling
            exit(1);
            break;
    }
    return 0;
}

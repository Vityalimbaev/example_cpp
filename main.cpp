
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string first_name;
    string second_name;
    int group;
public:
     Student()
     {
         first_name = "First_name";
         second_name = "Second_name";
         group = 0;
     }
     Student(first_name,Second_name,group):first_name(0),second_name(0),group(0)
     {
     }

     void ShowDate()
     {
         cout << first_name <<" "<< second_name<< " " << group;
     }
};



int main(int argc, char *argv[])
{
    cout << "Hello, World!\n";


    string a,b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;

    Student person(a,b,c);

    person.ShowDate();

    return 0;
}

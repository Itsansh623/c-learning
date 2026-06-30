#include <iostream>
using namespace std;

int main()
{
    int age;
     
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18 && age < 60)
    {
        cout << "Adult";
    }
    if (age >= 60 && age <150)
    {
        cout << "Senior Citizen";
    }
    else if (age < 18)
    {
        cout << "Minor";
    }

    return 0;
}

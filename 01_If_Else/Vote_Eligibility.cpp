#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote.";
    }
    else
    {
        cout << "you can't vote.";
    }
    return 0;
}

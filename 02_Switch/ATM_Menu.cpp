#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter an option (1-4): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        cout << "Check Balance." << endl;
        cout << "Your Balance is Rs.50000";
        break;

        case 2:
        cout << "deposit Money." << endl;
        cout << "Enter amount to deposit: ";
        int amount;
        cin >> amount;
        cout << "Rs." << amount << "  deposited successfully.";
        break;

        case 3:
        cout << "Withdraw cash." << endl;
        cout << "Enter Withdraw Amount: ";
        cin >> amount;
        cout <<"Rs." << amount << " withdrawn successfully.";
        break;

        case 4:
        cout << "Exit" << endl;
        cout << "Thanks for using ATM. ";
        break;

        default:
        cout << "Invalid Choice";
    }

    return 0;
}

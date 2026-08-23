#include <iostream>
using namespace std;

int main()
{
    int choice;
    int amount;
    int checkBalance;
    int balance = 1500;

    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter an option (1-4): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Check balance." << endl;
            cout << "Your balance is Rs. " << balance << endl;

            cout << "Press Enter to exit...";
            cin.ignore();
            cin.get();

            cout << "Thanks for using Fraud ATM.";
            break;

        case 2:
            cout << "Deposit money." << endl;
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance = balance + amount;

            cout << "Rs. " << amount << " deposited successfully." << endl;

            cout << "Check your updated balance? (1 = Yes, 2 = No): ";
            cin >> checkBalance;

            if (checkBalance == 1)
            {
                cout << "Your updated balance is Rs. " << balance << endl;
            }
            else
            {
                cout << "Balance not shown." << endl;
            }

            cout << "Press Enter to exit...";
            cin.ignore();
            cin.get();

            cout << "Thanks for using Fraud ATM.";
            break;

        case 3:
            cout << "Withdraw money." << endl;
            cout << "Enter withdraw amount: ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Insufficient Balance." << endl;

                int insufficientChoice;

                cout << "1. Enter Sufficient Balance" << endl;
                cout << "2. Exit" << endl;

                cout << "Enter your choice: ";
                cin >> insufficientChoice;

                if (insufficientChoice == 1)
                {
                    cout << "Enter withdraw amount again: ";
                    cin >> amount;

                    if (amount > balance)
                    {
                        cout << "Insufficient Balance again." << endl;
                    }
                    else
                    {
                        balance = balance - amount;

                        cout << "Rs. " << amount
                             << " withdrawn successfully." << endl;

                        cout << "Check your updated balance? (1 = Yes, 2 = No): ";
                        cin >> checkBalance;

                        if (checkBalance == 1)
                        {
                            cout << "Your updated balance is Rs. "
                                 << balance << endl;
                        }
                        else
                        {
                            cout << "Balance not shown." << endl;
                        }
                    }
                }
                else
                {
                    cout << "Exit" << endl;
                }
            }
            else
            {
                balance = balance - amount;

                cout << "Rs. " << amount
                     << " withdrawn successfully." << endl;

                cout << "Check your updated balance? (1 = Yes, 2 = No): ";
                cin >> checkBalance;

                if (checkBalance == 1)
                {
                    cout << "Your updated balance is Rs. "
                         << balance << endl;
                }
                else
                {
                    cout << "Balance not shown." << endl;
                }
            }

            cout << "Press Enter to exit...";
            cin.ignore();
            cin.get();

            cout << "Thanks for using Fraud ATM.";
            break;

        case 4:
            cout << "Exit" << endl;

            cout << "Press Enter to exit...";
            cin.ignore();
            cin.get();

            cout << "Thanks for using Fraud ATM.";
            break;

        default:
            cout << "Invalid choice" << endl;

            cout << "Press Enter to exit...";
            cin.ignore();
            cin.get();

            cout << "Thanks for using Fraud ATM.";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter a number (1-5): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        cout << "Your order: Burger" << endl;
        cout << "Price: Rs.120";
        break;

        case 2:
        cout << "Your order: Pizza" << endl;
        cout << "Price: Rs.250";
        break;

        case 3:
        cout << "Your order: Pasta" << endl;
        cout << "Price: Rs.180";
        break;

        case 4:
        cout << "Your order: Momos" << endl;
        cout << "Price: Rs.100";
        break;

        case 5:
        cout << "Your order: Cold Drink" << endl;
        cout << "Price: Rs.50";
        break;

        default:
        cout << "Invalid Order";
    }

    return 0;
}

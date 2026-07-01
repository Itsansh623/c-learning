#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    char op;
    cout << "Enter operator: ";
    cin >> op;

    switch (op)
    {
        case '+':
        result = num1 + num2;
        cout << "Result = " << result;
        break;

        case '-':
        result = num1 - num2;
        cout << "Result = " << result;
        break;

        case '*':
        result = num1 * num2;
        cout << "Result = " << result;
        break;

        case '/':
        result = num1 / num2;
        cout << "Result = " << result;
        break;

        default:
        cout << "Invalid operator";
    }

    return 0;
}

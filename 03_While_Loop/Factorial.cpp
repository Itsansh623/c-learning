#include <iostream>
using namespace std;

int main()
{
    long long num;
    cin >> num; 

    long long factorial = 1;

    while (num > 0 )
    {
        factorial = factorial * num;
        num--;
    }
    cout << "Factorial = " << factorial;
    return 0;
}

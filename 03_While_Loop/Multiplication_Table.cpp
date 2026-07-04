#include <iostream>
using namespace std;

int main()
{
    int table;
    cin >> table;

    int i = 1;

    while (i <= 10)
    {
        cout << table << " X " << i << " = " << table * i << endl;
        i++;
    }
    return 0;
}

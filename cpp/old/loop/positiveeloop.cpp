#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    cout << "enter the number = ";
    cin >> num;
    while (num >= 0)
    {
        sum += num;
        cout << "enter 2nd number = ";
        cin >> num;
    }
    cout << "the sum of two positive number " << sum;
    return 0;
};
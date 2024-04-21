#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "print 1st number = ";
    cin >> a;
    cout << "print 1st number = ";
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            /* code */
            if (i%j == 0)
            {
                /* code */
                break;
            }
        }
        if (j == i)
        {
            /* code */
            cout << i << endl;
        }
    }

    return 0;
};
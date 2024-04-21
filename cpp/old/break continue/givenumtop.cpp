
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "give to start = ";
    cin >> a;
    cout << "give to start = ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        int j;
        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                // cout<<"non-prime ";
                break;
            }
        }
        if (j == i)
        {
            cout << i << endl;
        }
    }

    return 0;
};
#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cin >> n;
    for ( i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "this is non-prime " << endl;
            break;
        }
    }
    if (i==n)
    {
        cout << "this is prim" << endl;
    }
    
    
    return 0;
};
#include <iostream>

using namespace std;

int decimaltobin(int n)
{

    int last = 0;
    int x = 1;
    while (x <= n)
        x = x * 2;
    x = x / 2;

    while (x > 0)
    {
        int lastdigit =n/x;
        n=n-(lastdigit*x);
        x=x/2;
        last=last*10 +lastdigit;


    }
    return last;
}

int main()
{
    int n;
    cin >> n;

    cout << decimaltobin(n) << endl;
    return 0;
};
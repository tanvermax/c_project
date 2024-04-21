#include <iostream>

using namespace std;
int decimaltooctal(int n)
{

    int x = 1;
    int last = 0;
    while (x <= n)
        x = x * 8;
    x = x / 8;

    while (x > 0)
    {
        int lastdigit = n/x;
        n = n - (lastdigit * x);
        x = x / 8;
        last = last * 10 + lastdigit;
    }
    return last;
}

int main()
{
    int n;
    cin >> n;

    cout << decimaltooctal(n) << endl;
    return 0;
};
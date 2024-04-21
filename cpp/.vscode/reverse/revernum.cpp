#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int reverse = 0;

    while (n > 0)
    {
        int lastdigti = n % 10;
        reverse = reverse * 10 + lastdigti;
        n = n / 10;
    }
    cout << reverse << endl;

    return 0;
};
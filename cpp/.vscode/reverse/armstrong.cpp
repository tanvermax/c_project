#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
int orginaln=n;
    while (n > 0)
    {
        int reverse = n % 10;
        sum += pow(reverse, 3);
            n = n / 10;
    }
    if (sum == orginaln)
    {
        cout << "armstrong" << endl;
    }
    else
    {
        cout << "not armstong" << endl;
    }

    return 0;
};
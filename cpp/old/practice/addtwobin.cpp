#include <bits/stdc++.h>

using namespace std;
int reverse(int n)
{
    int last = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        last = last * 10 + lastdigit;
        n = n / 10;
    }

    return last;
}
int addtwobin(int a, int b)
{
    int last = 0;
    int prevecarry = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            last = last * 10 + prevecarry;
            prevecarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (prevecarry == 1)
            {
                last = last * 10 + 0;
                prevecarry = 1;
            }
            else
            {
                last = last * 10 + 1;
                prevecarry = 0;
            }
        }
        else
        {
            last = last * 10 + prevecarry;
            prevecarry = 1;
        }
        a = a / 10;
        b = b / 10;
    }

    while (a > 0)
    {
        if (prevecarry == 1)
        {
            if (a % 2 == 1)
            {
                last = last * 10 + 0;
                prevecarry = 1;
            }
            else
            {
                last = last * 10 + 1;
                prevecarry = 0;
            }
        }
        else
            last = last * 10 + (a % 2);
        a = a / 10;
    }
    while (b > 0)
    {
        if (prevecarry == 1)
        {
            if (b % 2 == 1)
            {
                last = last * 10 + 0;
                prevecarry = 1;
            }
            else
            {
                last = last * 10 + 1;
                prevecarry = 0;
            }
        }
        else
            last = last * 10 + (b % 2);
        b = b / 10;
    }
    if (prevecarry == 1)
    {
        last = last * 10 + 1;
    }
    last = reverse(last);
    return last;
}

int32_t main()
{
    int a, b;
    cin >> a >> b;

    cout << addtwobin(a, b) << endl;

    return 0;
};
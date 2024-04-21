#include <bits/stdc++.h>

using namespace std;

int binarytodeci(int n)
{
    int last = 0;
    int x = 1;

    while (n > 0)
    {
        int y = n % 10;
        last = last + (x * y);
        x = x * 2;
        n = n / 10;
    }
    return last;
}

int octaltodesi(int n)
{
    int last = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        last = last + (x * y);
        x = x % 8;
        n = n / 10;
    }
    return last;
}

int hexatodemal(string n)
{
    int last = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            last = last + (x * (n[i] - '0'));
        }

        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            last = last + (x * (n[i] - 'A' + 10));
        }
        x = x * 16;
    }
    return last;
}

int32_t main()
{
    string n;
    cin >> n;

    cout << hexatodemal(n) << endl;
    return 0;
};
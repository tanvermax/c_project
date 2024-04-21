#include <bits/stdc++.h>

using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = z;
        c = x;
    }
    if (x * x == y * y + z * z)
        return true;
    else
        return false;
}

int32_t main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "pyhtogoren triplet" << endl;
    }
    else
    {
        cout << "not pyhtogoren triplet" << endl;
    }

    return 0;
};
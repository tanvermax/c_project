#include <bits/stdc++.h>

using namespace std;

int binarytodeci(int n)
{

    int last = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        last += x * y;
        x *= 2;
        n=n/ 10;
    }
    return last;
}

int main()
{
    int n;
    cin >> n;

    cout << binarytodeci(n) << endl;

    return 0;
}
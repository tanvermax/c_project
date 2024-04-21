#include <bits/stdc++.h>

using namespace std;
string decimaltohexa(int n)
{

    int x = 1;
    string last = "";
    while (x <= n)

        x = x * 16;
    x = x / 16;
    while (x > 0)
    {
        int lastdigit = n / x;
        n = n - (lastdigit * x);

        x = x / 16;
        if (lastdigit <= 9)
        {
            last = last + to_string(lastdigit);
        }
        else
        {
              char c = 'A' + lastdigit - 10;
            last.push_back(c);
        }
        }
    return last;
}


int32_t main()
{
    int n;
    cin >> n;

    cout << decimaltohexa(n) << endl;
    return 0;
};
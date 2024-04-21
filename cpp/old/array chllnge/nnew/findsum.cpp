#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    while (j < n && sum + a[j] <=s)
    {
        sum = sum + a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j;
        return 0;
    }

    while (j < n)
    {
        sum = sum + a[j];
        while (sum > s)
        {
            sum = sum - a[i];
            j++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout<<st<<" "<<en<<endl;

    return 0;
}
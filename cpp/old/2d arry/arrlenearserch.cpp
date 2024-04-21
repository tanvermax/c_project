#include <iostream>

using namespace std;

int main()
{
    int n, m, z;
    cin >> n >> m >> z;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == z)
            {
                found = true;
            }
        }
    }

    if (found)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}
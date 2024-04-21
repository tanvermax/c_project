#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int currensum[n + 1];

    currensum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currensum[i] = currensum[i - 1] + a[i - 1];
    }
    int maxSum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currensum[i] - currensum[j];

            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}
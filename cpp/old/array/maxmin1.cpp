#include <iostream>
#include <climits>
using namespace std; 

int main()
{
    int n, sum;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    int maxNO = INT_MIN;
    int minNO = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNO=max(maxNO,arr[i]);
        minNO=min(minNO,arr[i]);
    }

    cout << maxNO << " " << minNO << endl
         << sum << endl;

    return 0;
}
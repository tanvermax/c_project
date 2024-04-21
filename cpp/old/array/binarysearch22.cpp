#include <iostream>

using namespace std;

int binaryseacrh(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    for (int i = 0; i < n; i++)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e = mid + 1;
        }
        else
        {
            s = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the value you want to search = ";
    cin >> key;

    cout << binaryseacrh(arr, n, key) << endl;

    return 0;
}
// write a program to find a uniqe number in an arry where all number except one , are present twice

#include <iostream>

using namespace std;
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    cout << unique(arr, 9) << endl;
    return 0;
}

// #include <iostream>

// using namespace std;

// int unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     return xorsum;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
//     cout << unique(arr, 9) << endl;
//     return 0;
// }
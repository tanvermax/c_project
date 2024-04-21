#include <iostream>

using namespace std;

int main()
{
    // int a=10;
    // int* apntr= &a;
    // cout<<*apntr<<endl;

    // *apntr=30;
    // cout<<a<<endl;

    int arr[] = {10, 20, 30, 40};

    cout << *arr << endl;
    // int *pntr = arr;

    for (int i = 0; i < 3; i++)
    {
        cout << *(arr+i) << endl;
        pntr++;
    }

    return 0;
}
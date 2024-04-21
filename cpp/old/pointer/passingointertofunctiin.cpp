#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    // int *apntr = &a;
    // int *bpntr = &b;

    swap(&a, &b);

    cout << a << " " << b << endl;

    return 0;
}

// #include <iostream>

// using namespace std;
// void swap(int &a)
// {
//     *a++;
// }
// int main()
// {
//     int a = 2;

//     int *apnt=&a;

//     swap(&a);

//     cout << a << endl;
//     return 0;
// }
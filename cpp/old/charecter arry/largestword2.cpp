// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();

//     char arr[n + 1];
//     cin.getline(arr, n);
//     cin.ignore();

//     int i = 0;
//     int curenln = 0, maxlen = 0;

//     while (1)
//     {
//         if (arr[i] == ' ' || arr[i] == '\0')
//         {
//             if (curenln > maxlen)
//             {
//                 maxlen = curenln;
//             }
//             curenln = 0;
//         }
//         else
//             curenln++;

//         if (arr[i] == '\0')
//         {
//             break;
//         }
//         i++;
//     }
//     cout << maxlen << endl;
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currnlen = 0, maxlen = 0;
    int st = 0, maxst = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currnlen > maxlen)
            {
                maxlen = currnlen;
                maxst=st;
            }
            currnlen = 0;
            st=i+1;
        }
        else

            currnlen++;

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlen << endl;
    for (int i = 0; i < maxlen; i++)
    {
        cout << arr[i + maxst];
    }
    cout << endl;

    return 0;
}

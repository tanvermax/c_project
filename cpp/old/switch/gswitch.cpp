#include <iostream>

using namespace std;

int main()
{
    char button;
    cout << "input the button = ";
    cin >> button;

    // switch (button)
    // {
    // case 'A':
    //     cout << "hello behencho " << endl;
    //     break;
    //     case 'B':
    //     cout << "salamalaykum " << endl;
    //     break;
    //     case 'C':
    //     cout << "oyalaikum assalam" << endl;
    //     break;

    // default:
    //     cout << "i'm still learning more "<<endl;
    //     break;
    // }

    switch (button)
    {
    case '1':
        /* code */
        cout << "hello" << endl;
        break;
    case '2':
        /* code */
        cout << "sunny aunty" << endl;
        break;
    case '3':
        /* code */
        cout << "mia malkova" << endl;
        break;
    case 'd':
        /* code */
        cout << "alyxa star" << endl;
        break;
    default:
        cout << "bhai direct ja muje nehi pata" << endl;
        break;
    }
    return 0;
};
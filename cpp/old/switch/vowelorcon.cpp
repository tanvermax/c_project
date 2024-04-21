#include <iostream>

using namespace std;

int main()
{
    char axx;
    cout << "enter 1st value = " ;
    cin >> axx;
    

    // char vowel;
    // cin >> vowel;
    switch (axx)
    {
    case 'a':
        cout << "this is vowel" << endl;
        break;
    case 'e':
        cout << "this is vowel" << endl;
        break;
    case 'i':
        cout << "this is vowel" << endl;
        break;
    case 'o':
        cout << "this is vowel" << endl;
        break;
    case 'u':
        cout << "this is vowel" << endl;
        break;
    case 'A':
        cout << "this is vowel" << endl;
        break;
    case 'E':
        cout << "this is vowel" << endl;
        break;
    case 'I':
        cout << "this is vowel" << endl;
        break;
    case 'O':
        cout << "this is vowel" << endl;
        break;
    case 'U':
        cout << "this is vowel" << endl;
        break;
        // case 'a':
        // cout<<"this is vowel"<<endl;
        // break;

    default:
    cout<<"this is consonant"<<endl;
        break;
    }
    return 0;
};
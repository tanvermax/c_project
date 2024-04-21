#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "enter the value of a = " << endl;
    cin >> a;
    cout << "enter the value of b = " << endl;
    cin >> b;

    char op;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a + b<<endl;
        break;
    case '-':
        cout<<a - b<<endl;
        break;

    case '*':
        cout<<a * b<<endl;
        break;

    case '/':
        cout<<a / b<<endl;
        break;

    case '%':
        cout<<a % b<<endl;
        break;

    default:
    cout<<"oparator not found"<<endl;
        break;
    }
    return 0;
};
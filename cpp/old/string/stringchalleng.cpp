#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string str = "alkoiavcrnvi";
    // convert to upper case
    cout << 'a' - 'A' << endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;
    // convert to lowwer case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    return 0;
}
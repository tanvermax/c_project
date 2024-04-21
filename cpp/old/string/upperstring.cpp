#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string ss = "mpodavmpjtivamvafv";

    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] >= 'a' && ss[i] <= 'z')
        {
            ss[i] =ss[i]- 32;
        }
    }
    cout << ss << endl;
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] >= 'A' && ss[i] <= 'z')
        {
            ss[i] = ss[i]+32;
        }
    }
    cout << ss << endl;

    // transform(ss.begin(), ss.end(), ss.begin(), ::toupper);
    // cout << ss << endl;

    // string sss = "DSFNVINDRVINRUNRRUVALKF";
    // transform(sss.begin(), sss.end(), sss.begin(), ::tolower);

    // cout << sss << endl;

    // string s = "98392385";

    // sort(s.begin(), s.end(), greater<int>());
    // cout << s << endl;
    // sort(s.end(), s.begin(), greater<int>());
    // cout << s << endl;

    return 0;
}
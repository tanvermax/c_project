#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s1 = "niaabbccddee";

    // s1.erase(2,4);
    // cout<<s1<<endl;
    cout << s1.find("ddee") << endl;

    cout << s1.insert(5, "lol") << endl;

    cout << s1.length() << endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }

    // substring

    string s = s1.substr(4, 6);
    cout << s << endl;

    string s2 = "46546";
    int x = stoi(s2);

    cout << x + 2 << endl;

    int y = 346;

    cout << to_string(y) + "2" << endl;

    string s4 = "jfianonfnconvinrjafoiv";
    // sort(s4.begin(), s4.end());
    sort(s4.begin(),s4.end()); 
    cout << s4 << endl;

    return 0;
}
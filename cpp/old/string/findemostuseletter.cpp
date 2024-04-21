#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // string s = "akncyekyanycebyaayceca";

    // int arr[26];

    // for (int i = 0; i < 26; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int i = 0; i < s.size(); i++)
    // {
    //     arr[s[i] - 'a']++;
    // }
    // char ans = 'a';
    // int maxF = 0;

    // for (int i = 0; i < 26; i++)
    // {
    //     if (arr[i] >= maxF)
    //     {
    //         maxF = arr[i];
    //         ans = i + 'a';
    //     }
    // }

    // cout << maxF << " " << ans << endl;

    string ss = "sdjfhasndfcaviruvrvvk";

    int arr[26];

    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < ss.size(); i++)
    {
        arr[ss[i] - 'a']++;
    }

    char ans = 'a';

    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>maxF)
        {
            maxF=arr[i];
            ans=i+'a';
        }
        
    }
    

    cout << maxF << " " << ans << endl;

    return 0;
}

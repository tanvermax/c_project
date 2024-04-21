#include <iostream>

using namespace std;

int factoreal(int n)
{
    int fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact *=  i;
    }
    return fact;
}

// int factoreal2(int r){
//     int fact=1;

//     for (int i = 2; i <=r; i++)
//     {
//         fact=fact*r;
//     }
//     return fact;
// }

// int factoreal3(int last)
// {
//     int fact = 1;

//     for (int i = 2; i <= last; i++)
//     {
//         fact = fact * last;
//     }
//     return fact;
// }

int main()
{
    int n, r;
    cin >> n >> r;
    // int last =n-r;

    int ans = factoreal(n) / (factoreal(r) * factoreal(n - r));
    // int ans2= factoreal2(r);
    // int ans3= factoreal3(last);
    cout << ans << endl;
    // cout<<ans2<<endl;
    // cout<<ans3<<endl;
    // ncr=ans/(ans3*ans2);

    // cout<<ncr<<endl;
    return 0;
};
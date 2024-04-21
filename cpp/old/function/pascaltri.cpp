#include <iostream>

using namespace std;

int fact(int n){
    int factoreal=1;
    for (int i =2; i <=n; i++)
    {
        factoreal=factoreal*i;
    }
    return factoreal;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout <<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    // int ans = nump(n);
    // cout<<ans<<endl;
    return 0;
};
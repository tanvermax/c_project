#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
int orgunaln=n;
    while (n > 0)
    {
        int lastdigti = n % 10;
        sum+=pow(lastdigti,3);
        n=n/10;
    }
    if (sum==orgunaln)
    {
       cout<<"armstong"<<endl;
    }
    else{
        cout<<" not armstong"<<endl;
    }
    
   
    return 0;
};
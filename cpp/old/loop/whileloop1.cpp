#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int num = 2;

    while (num <= N)
    {
        int div = 2;

        while (div < num)
        {
            if (num % div == 0)
            {
                num = num +1;
            }
            else
            {
                div = div+1 ;
            }
        }
        cout << num << endl;
        num = num +1 ;
    }

    return 0;
};

// write a program to count the number of ones in binary representaion of a number?
// #include<iostream>

// int numberofojne(int n)
// {
//     int count=0;
//     while (n)
//     {
//         n=n&n-1;
//         count++;

//     }
//     return count;
// }
// using namespace std;

// int main(){
// cout<<numberofojne(21)<<endl;
// return 0;
// }

// write a program to count the number of ones in binary representaion of a number?

#include <iostream>

using namespace std;
int numberofone(int n)
{
    int coutn = 0;

    while (n)
    {
        /* code */
        n = n & n - 1;
        coutn++;
    }
    return coutn;
}
int main()
{
    cout << numberofone(19) << endl;
    return 0;
}

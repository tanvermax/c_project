#include <iostream>

using namespace std;
int clrartbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int main()
{
    cout << clrartbit(5, 2) <<endl;
    return 0;
}
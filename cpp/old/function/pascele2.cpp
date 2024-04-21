#include<iostream>

using namespace std;
int fact(int n){
    int last=1;
    for (int i = 2; i <=n; i++)
    {
        last=last*i;
    }
    return last;
}
int main(){
int n;
cin>>n;

for (int i = 0; i <=n; i++)
{
    for (int j = 0; j <=i; j++)
    {
        cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
    cout<<endl;
}

return 0;
};
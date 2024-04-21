#include<iostream>
using namespace std;
int main(){
int x,y;

cin>>x>>y;
int n1,n2;
if (x>y)
{
    /* code */
    n1=x;
    n2=y;
}
else
{
    n1=y;
    n2=x;
}

cout<<"MAX="<<n1<<endl;
cout<<"MIN="<<n2<<endl;



return 0;
};
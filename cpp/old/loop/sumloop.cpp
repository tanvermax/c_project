#include<iostream>
using namespace std;
int main(){
int num,sum;
cin>>num;
sum= 1;

for (int  i = 1; i <=num; i++)
{
    sum=sum*i;
}
cout<<sum<<endl;

return 0;
};
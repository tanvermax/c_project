#include<iostream>
#include<cmath>

using namespace std;

int main(){
int n;
cin>>n;
bool flag=true;
for (int i = 2; i <sqrt(n); i++)
{
    if (n%2==0)
    {
        cout<<"not prime"<<endl;
        flag=false;
        break;
    }
    
}
if (flag==true)
{
    cout<<"prime"<<endl;
}

return 0;
};
#include<iostream>
using namespace std;
int main(){
int x,y,z;
cin>>x>>y>>z;
if (x>y)
{
    if (x>z)
    {
        cout<<"x id greter then them"<<endl;

        /* code */
    }
    else
    {
        cout<<"z id greter then them"<<endl;
    }
    
    
    /* code */
}
else
{
    if (y>x)
    {
        if (y>z)
        {
            /* code */
            cout<<"y id greter then them"<<endl;
        }
        else
        {
            cout<<"z id greter then them"<<endl;
            /* code */
        }
        
    }
    
    
}


return 0;
};
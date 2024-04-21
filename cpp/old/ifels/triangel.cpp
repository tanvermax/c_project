#include<iostream>
using namespace std;
int main(){
int a,b,c;
//cout<<"input the triangel sides = "<<endl;
cin>>a>>b>>c;

if (a==b && b==c)
{
    cout<<"the is equilateral triangel"<<endl;
}
else
{
    if (a==b || b==c || c==a )
    {
         cout<<"the is isosceles triangel"<<endl;
    }
    else{
        cout<<"the is scalene triangel"<<endl;
    }

}



return 0;
};
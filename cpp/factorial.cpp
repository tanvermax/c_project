#include<iostream>
using namespace std;
int factorial(int n){
    int favt=1;
    for (int i = 2; i <=n; i++)
    {
       favt=favt*i;
    }
    return favt;
}



int main(){
int n;
cin>>n;

int ans= factorial (n);
cout<<ans<<endl;

return 0;
};
#include<iostream>

using namespace std;

int factorial(int n){
    int facty=1;
    for (int i = 2; i <=n; i++)
    {
        facty=facty*i;
    }
    return facty;
}

int main(){
int n;
cin>>n;

int ans=factorial (n);
cout<<ans<<endl;
return 0;
};
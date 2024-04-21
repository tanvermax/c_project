#include<iostream>

using namespace std;

int sum(int n){
    int last=0;
    for (int i = 1; i <=n; i++)
    {
        last=last+i;
    }
    return last;
}

int main(){
int n;
cin>>n;

cout<<sum(n)<<endl;

return 0;
};
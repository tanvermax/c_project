1 
            2 1 2 
          3 2 1 2 3 
        4 3 2 1 2 3 4 
      5 4 3 2 1 2 3 4 5 
    6 5 4 3 2 1 2 3 4 5 6 
  7 6 5 4 3 2 1 2 3 4 5 6 7 
8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 
#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;
for (int i =1 ; i <=n; i++)
{
    int j;
    for ( j = 1; j <=n-i; j++)
    {
        cout<<"  ";
    }
    int k=i;
    for (; j <=n; j++)
    {
        cout<<k--<<" ";
    }
    k=2;
    for (; j <=n+i-1; j++)
    {
        cout<<k++<<" ";
    }
    
    // for (; j <; i++)
    // {
    //     /* code */
    // }
    
    
    
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    
    cout<<endl;
    
    
}

return 0;
};